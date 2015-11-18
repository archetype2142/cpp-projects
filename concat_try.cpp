#include <iostream>
#include <stdlib.h>
#include <string.h>
int main()
{
	
	char arr_1[] = "This string will be";
    char arr_2[] = " added to this string";
	
	strcat (arr_1, arr_2);

	std::cout << arr_1 << "\n";
	
}