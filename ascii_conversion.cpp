#include <iostream>
#include <stdlib.h>

int main()
{
	char char_user;
	std::cout << "                              CONVERTING TO ASCII" << std::endl;
	std::cout << "Enter an alphabet: ";
	std::cin >> char_user;
	if (int(char_user) >= 97 && int(char_user) <=122)
	{
		std::cout << "The ASCII value of " << char_user << " is " << int(char_user) << std::endl;
		std::cout << "And the ASCII value of " << char(int(char_user) - 32) << " is " << int(char_user) - 32 << std::endl;
	}
	else if (int(char_user) >= 65 & int(char_user) <= 90)
	{
		std::cout << "The ascii value of " << char_user << " is " << int(char_user) << std::endl;
		std::cout << "And the ASCII value of " << char(int(char_user) + 32) << " is " << int(char_user) + 32 << std::endl;

	}
	
	return 0;
}