#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int x, x_commission, y, y_commission, bonus;
	cout << "Enter values for X :";
	cin >> x;

	cout << "Enter values for Y :";
	cin >> y;

if (x >= 5000) 
	x_commission = 0.02;
if (x >= 7000) 
	x_commission = 0.05;
if (y >= 5000) 
	y_commission = 0.02;
if (y >= 7000) 
	y_commission = 0.05;
if (x + y > 20000) 
	bonus = 0.01;

cout << "You earned Rs. " << (x * x_commission) << " on the sale of X, Rs. " <<  (y * y_commission) << " on the sale of Y, and a bonus of Rs. " << ((x + y) * bonus) << ".";

return 0;
}