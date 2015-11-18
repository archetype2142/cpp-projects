
#include <iostream>
using namespace std;

struct year
{
	char month[20];
	int days;
};

	year table[12] = { { "January", 31 },
				   { "Febuary", 28 },
				   { "March", 31 },
				   { "April", 30 },
				   { "May", 31 },
				   { "June", 30 },
				   { "July", 31 },
				   { "August", 31 },
				   { "September", 30 },
				   { "October", 31 },
				   { "November", 30 },
				   { "December", 31 }
				};


int main()
{
	for(int i = 0; i < 12; i++)
	{
		cout << endl;
		cout << table[i].month << " ";
		cout << table[i].days;
    }

	cout << endl;
	            
    return 0;
}