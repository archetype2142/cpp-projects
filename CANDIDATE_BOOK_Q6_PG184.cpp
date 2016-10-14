#include <iostream>
#include <stdio.h>

using namespace std;

class CANDIDATE {
	long Rno;
	char name[50];
	float score;
	char Remark[50];

public:

	void ENTER(){
		cout << "Enter value for Rno: ";
		cin >> Rno;
		cout << endl;
		cout << "Enter name: ";
		cin >> name;
		cout << "\nEnter Score: " << score;
		cin >> score;
	}

	void AssignRem(){
		if(score > 99 && score <= 100)
			cout << "Topper\n";
		else if(score < 99)
			cout << "Failure\n";
	}

	void DISPLAY(){
		cout << "\nRoll number entered was " << Rno << " \nScore is " << score << "\nRemark: ";
		AssignRem();
	}
};

int main()
{
	CANDIDATE c1;
	c1.ENTER();
	c1.DISPLAY();

	return 0;
}
