#include <iostream>
#include <stdio.h>

using namespace std;

class RESORT {
	int Rno;
	char Name[50];
	int Charges;
	int Days;
	int COMPUTE(int Charges, int Days){
		float amt;
		amt = Charges * Days;
		
		if(amt > 11000)
			amt = amt * 1.02;

		return amt;	
	}

public: 
	void Getinfo(){
		cout << "Enter room number: ";
		cin >> Rno;
		cout << "Enter the name of the visitor: ";
		cin >> Name;
		cout << "Enter the charges per day: ";
		cin >> Charges;
		cout << "Enter the number of days of stay: ";
		cin >> Days;
	}

	void Dispinfo(){
		float amount;

		cout << "Name: " << Name << "\nRoom number: " << Rno << "\nCharges per day: " << Charges << "\nAmount to be paid: ";
		amount = COMPUTE(Charges, Days);
		cout << amount << endl; 
	}
};

int main()
{
	RESORT test;
	test.Getinfo();
	test.Dispinfo();

	return 0;
}