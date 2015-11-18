/*check if the square root of the given
number is a prime or not */
#include <iostream>
#include <stdlib.h>
#include <math.h>
  int main (void)
{
	double a;
	int b = 2;
	std::cout << "Enter a number: ";
	std::cin >> a;
	if (sqrt(a) % b == 0)
	{
		std::cout << "Not prime";
	}
	else 
	{
		std:cout << "prime";
	}
}
