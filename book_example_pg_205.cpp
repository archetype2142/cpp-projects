#include <iostream>
#include <stdlib.h>

int main()

{
	int marks;
	char clas;
	std::cout << "Enter the class: ";
	std::cin >> clas;
	std::cout <<"Enter marks: ";
	std::cin >> marks;
	std::cout << ((clas >= 11) ? (marks >= 80 ) ? 'A' : 'B' : 'C'); //yaad hai? yeah see output idk samaj ni aa rha
	std::cout << clas << std::endl;
}