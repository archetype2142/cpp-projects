#include <iostream>
#include <stdlib.h>
#include <cstring>

 int main()

{
	char your_name[20];
	
	std::cout << "Enter your name: ";
	std::cin >> your_name;
	std::cout << "Goodmorning, ";
	std::cout.write (your_name, strlen(your_name)) << std::endl;

    return 0;
}
