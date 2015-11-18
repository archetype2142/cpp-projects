#include <iostream>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num_1, num_2, num_3;
	std::cout << "Enter a number: ";
	std::cin >> num_1;
	std::cout << "Enter another number: ";
	std::cin >> num_2;
	std::cout <<"Enter another number: ";
	std::cin >> num_3;
	int max;
	if (num_1 > num_2 && num_1 > num_3)
	{
		max = num_1;
	}
	if (num_2 > num_1 && num_2 > num_3)
	{
		max = num_2;
	}
	if (num_3 > num_1 && num_3 > num_2)
    {
		max = num_3;
    }
	std::cout << "The greatest of the three numbers is: " << max << std::endl;

	return 0;  
}