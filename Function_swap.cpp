#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int swap(int, int);
	int a, b;

	cout << "Enter values for a and b\n";
	cout << "Enter value for a: ";
	cin >> a;

	cout << "Enter value for b: ";
	cin >> b;

	cout << "values before swap\n " << "a = " << a << ", " << "b = " << b << endl;
	swap(a, b);

	return 0;
} 

int swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	cout << "Swapped values are: \n";
	cout << "a = " << a << ", " << "b = " << b << endl;
}