#include <iostream>
#include <stdlib.h>

int main(void)

{
	char ch;
	for ( ch = 'A'; ch <= 'E'; ch++)
	{
		std::cout << std::endl;
		for ( char ch1 = 'E'; ch1 >= ch; ch1--)
	    std::cout << ch; //change to ch1 for different pattern
    }
return 0;
}
