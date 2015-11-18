#include <iostream>
#include <stdlib.h>
int main()
{
	float cube(float);
	float p,q;
	std::cout << "Enter a number to cubify: ";
	std::cin >> p;
	std::cout << std::endl;
	q = cube(p);
	std::cout << "Cube of " << p << " is " << q << std::endl;
	return 0;
}
float cube (float a)
{
	float b;
	b = a * a * a;
	return (b);
}
