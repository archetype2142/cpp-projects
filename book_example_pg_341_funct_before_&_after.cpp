#include <iostream>
#include <stdlib.h>
int main()
{
	int change(int);
	int orig = 10;
	std::cout << "Oringinal value is: " << orig << std::endl;
	std::cout << "value after function is: " << change(orig) << std::endl;
	std::cout << "value after function is over: " << orig << std::endl;
	return 0;
}
int change(int a)
{
	a = 20;
	return (a);
}