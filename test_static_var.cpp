#include <iostream>
#include <stdio.h>

using namespace std;

class stat_count
{
	int code;
	float price;
	static int count;

 public:
	void getval()
	{
		cout << "Enter code(any integer): ";
		cin >> code;
		cout << "Enter the price(floating point integer): ";
		cin >> price;
		
		count++;
	}

	void display()
	{
		cout << "Code entered was: " << code << endl;
		cout << "Price was: " << price << endl;
	}

	static int dispcount()
	{
		cout << count;
	}
};

int stat_count::count = 0;

void getval(int, float);

int main()
{
	char cont, dispcount;

	do{
		stat_count object1;
		object1.getval();
		object1.display();
		cout << "Number of times code was executed: ";
		stat_count::dispcount();
		cout << endl;
		cout << "Wanna continue? (y/n): ";
		cin >> cont;
	} while(cont == 'y');
}