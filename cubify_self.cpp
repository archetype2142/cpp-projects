#include <stdlib.h>
#include <iostream>
int main()
{
	float cubify(float);
    float x,y;
    std::cout << "Enter a number to find it's cube: ";
    std::cin >> x;
    y = cubify(x);
    std::cout << "\n The cube is " << y << std::endl; 
    return 0;
}

float cubify(float a)
{
	float b;
	b = a*a*a;
	return (b);
}