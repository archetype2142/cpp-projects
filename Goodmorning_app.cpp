#include <iostream>
#include <stdlib.h>
#include <cstring>

 int main()

{
	char name[20];
	
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Goodmorning, ";
	std::cout.write (name, strlen(name)) << std::endl;

    return 0;
}
