#include <iostream>
#include <stdlib.h>
int main()
{
	int findpos(char s[], char c) ;
	char string[80], ch ; 
	int y = 0 ;
	std::cout << "Enter a string value maximum of (80): " ;
    std::cin.getline(string, 80) ;
    std::cout << "Enter a char to be seacrched for: " ;
    std::cin.get(ch) ;
    y = findpos(string, ch);
    if (y == -1)
    	std::cout << "Sorry, character is not a string.";
    return 0;
}
int findpos(char s[], char c)
{
	int flag = -1 ;
	for (int i = 0; s[i] != '\0'; i++) 
	{
		if (s[i] == c)
		{
			flag = 0;
			std::cout << "The char in the string is at position: " << i + 1 << std::endl;
		}
	}
	return flag;
}