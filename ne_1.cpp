//first array find sun, prod, avg of 20 items
#include <iostream>
#include <stdlib.h>
int main()
{
	double price[20], sum, prod, avg;
	sum = avg = 0;
	prod = 1;
	for (int i = 0; i < 20; ++ i )
	{
		std::cout << "Enter price of item" << i + 1 << ":";
		std::cin >> price [i];
		sum += price[i];
		prod *= price[i];
	}
	avg = sum/20;
	std::cout <<"Sum is: " << sum[i] ;
	std::cout <<""
}