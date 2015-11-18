#include <iostream>
#include <iomanip>
	 
int main()
{
    int value = 1;
    int num1 = 1;
    int factorial = 1;
    std::cout << "Calculating a Factorial\n";
	do
	{
	    std::cout << "Enter a value between 1 and 10. (0 to quit): ";  
	    std::cin >> value;
	    if (value >0 && value < 11)  
	{
	for (num1=1 ; num1 <= value ; num1++)
	     factorial *= num1;
	            std::cout << "------------------\n" << std::endl;
	     std::cout << value << "! = " << factorial << std::endl << std::endl;
	}
	else if (value != 0)
	{
	    std::cout << "The value is out of range.\n";
	    std::cout << "Please Re-enter a value between 1 and 10. (0 to quit): ";
	    std::cin >> value;
	}
    }
    while (value!=0);
	std::cout << "Goodbye!\n";
}
//lol mackintosh dekhega? na bhai jyada time ni hai. ok bas gaana lagane de :3