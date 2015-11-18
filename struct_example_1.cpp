#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct dob
{
	int dd, mm, yy;
};

struct adrr
{
	char street[20], address[50];
	int houseno;
};

struct employee
{
	char name[30];
	int age, empid;
	dob date;
	char gender[2];
};

int main()
{	int search( int a );
	int i, choice;
	employee employee_other[i];
	int n;
	cout << "Enter the number of employees: ";
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cout << "Enter following details for employee " << n + 1;
		cout << "\nEmployee name: ";
		cin.getline(employee_other[i].name, 30);

		cout << "\nAge: ";
		cin >> employee_other[i].age;

		cout << "\nEmployee ID number: ";
		cin >> employee_other[i].empid;

		cout << "\nDate of Birth (dd/mm/yy): ";
		cin >> employee_other[i].date.dd;
		cout << ", ";
		cin >> employee_other[i].date.mm;
		cout << ", ";
		cin >> employee_other[i].date.yy;
	
		cout << "\nGender (m/f): ";
		cin.getline(employee_other[i].gender, 2);
	}
	
	do
	{	int empid, y;
		cout << "----------------------------Find details of an employee-----------------------------------";
		cout << "\nEnter employee ID number: ";
		cin >> empid;

		y = search(empid);
		cout << y;

		cout << "Wanna continue? (y/n)";
		cin >> choice;
	} while(choice == 'y');
	return 0;
}

int search( int a )
{
	int n;
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] = e[i].empid)
		{
			cout << "Entered employee ID number was: " << e[i].empid;

			cout << "\nDetails of employee " << n + 1;
			cout << "\nEmployee name: ";
			cout << employee_other[i].name;

			cout << "\nAge: ";
			cout << employee_other[i].age;

			cout << "\nEmployee ID number: ";
			cout << employee_other[i].empid;

			cout << "\nDate of Birth (dd/mm/yy): ";
			cout << employee_other[i].date.dd;
			cout << "/";
			cout << e[i].date.mm;
			cout << "/";
			cout << employee_other[i].date.yy;
		
			cout << "\nGender: "
			cout << employee_other[i].gender;
		}
		
	}
}