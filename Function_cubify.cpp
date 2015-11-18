
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int cubify(int);
	int a, y;

	cout << "Enter a number to cubify: ";
	cin >> a;

	y = cubify(a);

	cout << y << "\n";

	return 0;
}

int cubify (int a)
{
	int x;

	x = pow(a, 3);
}