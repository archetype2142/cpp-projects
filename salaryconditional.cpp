#include <iostream>
#include <stdlib.h>
 
int main()

{
	int age_employee, experience_employee;
	double salary;

	std::cout << "Enter your age: ";
	std::cin >> age_employee;
	std::cout << "Are you experienced? (y/n)";
	std::cin >> experience_employee;
    
    salary = (experience_employee == 'y') ? ((age_employee > 35) ? 6000 : (age_employee > 28) ? 4800 : 3000 ) : 2000;
    std::cout << "Your salary is, " << salary << std::endl;

  return 0;

}
// 