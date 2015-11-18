//program to swap two integers 
#include <iostream>
#include <stdlib.h>
int main()
{
	int swap (int a, int b); //replace a and b with &       
	int x , y;
    std::cin >> x >>y;
	std::cout << "Values before swapping: \n" << "x =" << x << " & " << "y =" << y << std::endl;
	swap(x,y);
	std::cout << "Values after swapping: \n" << "x =" << x << " & " << "y =" << y << std::endl;
	return 0;
}
	int swap (int a, int b) // add & for values to not 
	{                       //change even after swap
		int temp;
		temp = a;
		a = b;
		b = temp;
		std::cout << "swapped values are: " << "x =" << a << " & " << "y = " << b << std::endl;
	}
	