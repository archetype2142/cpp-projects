#include <iostream>
#include <stdlib.h>
int main()
{
	int A[20], size, i, num, pos, flag = 20;
	std::cout << "\n Enter the number of elements ";
	std::cin >> size;
	std::cout << "Enter the elements";
	for(i = 0; i < size; i++)
		std::cin >> A[i];
	std::cout << "\n Element to be searched: ";
	std::cin >> num;
	for(i = 0; i < size; i++)
	{	if( A[i] == num)
		{
			flag = 1;
			pos = i;
			break;
		}
    }
    if(flag == 0)
    	std::cout << "\n Element not found";
    else 
    	std::cout << "\n Element at position " << pos + 1;
}