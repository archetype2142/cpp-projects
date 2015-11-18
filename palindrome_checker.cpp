#include <iostream>
#include <stdlib.h>
#include <string.h>
int main()
{
	char string[80];
	int len, flag = 1;
	std::cout << "Enter a string: ";
	std::cin.getline(string, 80);
	len = strlen(string);
	for (int i = 0; i < len / 2; i++) 
	{
    	if (string[i] != string[len-1-i]) 
    		flag = 0;
    }
	if(flag != 0)
			std::cout << "It is a palindrome. \n";
	else
			std::cout << "It is not a palindrome. \n";
}

