#include <iostream>
#include <stdlib.h>
#include <string.h>
int main()
{
	int l, i, k = 0;
	char str[80], word[80];
	std::cout << "Enter any string (max. 80 chars)" << std::endl;
	std::cin.getline(str, 80);
	strcat(str, " ");
	for(i = 0; str != '\0'; i++)
	{
		if(str != '\0')
		{
			word[k] = str[i];
			k = k + 1;
		}
		else 
		{
			while(k > 0)
			{
				std::cout << word[--k];
			}
		}
	}
	return 0;
}