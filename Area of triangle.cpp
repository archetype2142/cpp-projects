#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
	float s, a, b, c; //s = semi_perimeter, a = side_1, b= side_2, c = side_3
	std::cout << "Enter side a: ";
	std::cin >> a;
	std::cout << "Enter side b: ";
	std::cin >> b;
	std::cout << "Enter side c: ";
	std::cin >> c;

	s = (a + b + c) / 2;

	std::cout << "Area of the triangle is: " << sqrt(s * (s - a) * (s - b) * (s - c)) << std::endl;

	return 1;
}