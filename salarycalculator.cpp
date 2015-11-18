// Write a program that inputs experience & age of a person. The salay of the person is 6000 if experienced
//& age is more than 35 otherwise if the person is experienced and age is more than 28 but less than 34 then the salary is 4800
// othherwise for experienced pderson salary should be 3000 and for an inexperienced person, salary should be 2000.
#include <iostream>
#include <stdlib.h>

int main() 
{
    char experience; 
    int age;
    std::cout << "Are you experienced? (y/n) "; 
    std::cin >> experience;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (experience == 'y' && age > 35) 
    {
        std::cout << "Your salary is 6000 "; 
    }
    else if (experience == 'y' && (age < 34 && age > 28)) 
    {
        std::cout << "Your salary is 4800" << std::endl; 
    }
    else 
        std::cout<< "your salary is 2000" << std::endl;
    
    return 0; 
} 