#include <iostream>
using namespace std;

int main ()
{
	int PI = 3.14159, x, p, area;
	#define CIRCLE_AREA( x ) PI * x * x

	cout << "Enter radius of the circle: ";
	cin >> p;
	area = CIRCLE_AREA(p);
	cout << "Area is: " << area;
	cout << endl;
} 