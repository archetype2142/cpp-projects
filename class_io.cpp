#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

class Student
{
	int rno;
	char name[20];
	int marks;
public:
	void getData(){
		cout << "Enter student's name: ";
		cin >> name;
		cout << "\nEnter student's roll number: ";
		cin >> rno;
		cout << "\nEnter student's marks: ";
		cin >> marks;
	}

	void displayData(){
		cout << "\nRoll number: " << rno;
		cout << "\nName:        " << name;
		cout << "\nMarks:       " << marks << endl;
	}

	int getRoll(){
		return rno;
	}
};

int main(){
	int students = 1;
	int roll_num, choice;
	fstream new_student;
	new_student.open("Student_info", ios::in | ios::out);
	cout << "1. Enter records\n2. Search records.\n3. Delete Record.\n4. Display records.\nChoice: ";
	cin >> choice;

    if (choice == 1){
		if(!new_student){
				cout << "File cannot be opened.\n";
				return -1;
		}
		else{
			cout << "\nEnter number of students to add record for(press enter for single student): ";
			cin >> students;
			cout << "\nEntering record for " << students << " students.";
			Student studs[students];
			for(int i = 0; i < students; i++){
				cout << "\nEntering information for student " << i + 1 << endl;
				studs[i].getData();
				new_student.write((char*)&studs[i], sizeof(studs[i]));
			}
		}
		for(int i = 0; i < students; i++){
			Student studs[students];
			new_student.read((char*)&studs[i], sizeof(studs[i]));
			cout << "\nDisplaying details of student " << i + 1;
			studs[i].displayData();
		}
	}
	
	else if(choice == 2) {
		Student studs[students];
		cout << "\n-------- NOW SEARCHING ---------\n";
		cout << "Enter roll number of record to be searched for: ";
		cin >> roll_num;
		cout << "Searching...";
		for(int i = 0; i < students; i++){
			new_student.read((char*)&studs[i], sizeof(studs[i]));
			if(studs[i].getRoll() == roll_num){
				cout << "\nRecord/s found!\n";
				studs[i].displayData();
			}
			else 
				cout << "Record not found.\n";
		}
	}

	else if(choice == 3) {
		Student studs[students];
		fstream temp_student("temp_student", ios::in | ios::out);
		int roll_del;
		cout << "\nEnter the roll number of the record to be deleted: ";
		cin >> roll_del;
		for(int i = 0; i < students; i++){
			if(studs[i].getRoll() == roll_del){
				temp_student.write((char*)&studs[i], sizeof(studs[i]));
			}
			else
				cout << "Record not found!\n";
		}
		while(!temp_student.eof()){
	 		for(int i = 0; i < students; i++){
				temp_student.read((char*)&studs, sizeof(studs));
				cout << "Record of student " << i + 1 << endl;
				studs[i].displayData();
			}
		}
		temp_student.close();
		remove ("Student_info");
		rename ("temp_student", "Student_info");
	}

	else if(choice == 4){
		Student studs[students];
	 	while(!new_student.eof()){
	 		for(int i = 0; i < students; i++){
				new_student.read((char*)&studs, sizeof(studs));
				cout << "Record of student " << i + 1 << endl;
				studs[i].displayData();
			}
		}
	}
	new_student.close();
	return 0;
}