/* menu driven program
1. area of a right triangle
2. area of a circle
3. v = u + at
4. exit 
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
int main()
{
    int range, first = 0, second = 1, fibonicci=0;

	int choice;

	std::cout << "Choose one of the following: " << std::endl;
	std::cout << " \n \nPress 1. To find the area of a right angled triangle" << std::endl;
	std::cout << "Press 2. To find the area of a circle" << std::endl;
	std::cout << "Press 3. To find the velocity when initial velocity, acceleration and time period is given" << std::endl;
	std::cout << "Press 4. To print the pattern" << std::endl;
    std::cout << "Press 5. For fibonicci series" << std::endl;
	std::cout << "Press 6. Find reverse of the number entered" << std::endl;

	std::cout << "\n CHOICE? :";

	std::cin >> choice;
    while (choice < 7){
    switch(choice)
	{
	case 1:

	double base, height, area;

	std::cout << "Enter the length of the base of the triangle: ";
	std::cin >> base;
	std::cout << "Enter the length of the height of the triangle: ";
	std::cin >> height;
	area = (base * height) / 2;
    std::cout << "The area is, " << area;
    break;

    case 2:

    double rad, area_2;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> rad;
    area_2 = 2 * M_PI * pow (rad, 2);
    std::cout << "The are is, " << area_2;
    break;

    case 3:

    int v, u, a, t;

    std::cout << "Enter initial velocity: ";
    std::cin >> u;
    std::cout << "Enter the acceleration on the body: ";
    std::cin >> a;
    std::cout << "Enter the time period: ";
    std::cin >> t;
    v = u + a*t;
    std::cout << "value of v = " << v << std::endl;
    break;

    case 4:

    int i, k;

    for (i = 1; i <= 6; i++ )

    {
        for(k = 1; k < i; k++ )

        {
        	std::cout << "*";
        }
   
        std::cout << std::endl;
    }
    break;

    case 5:

    std::cout << "Enter Range for Terms of Fibonacci Sequence: ";
    std::cin >> range;
    std::cout << "Fibonicci Series upto " << range << " Terms "<< std::endl;
    for ( int c = 0 ; c < range ; c++ )
    {
    
    if ( c <= 1 )
    fibonicci = c;
    else
    {
        fibonicci = first + second;
        first = second;
        second = fibonicci;
    }

   std::cout << fibonicci <<" ";

    }
   break;

   case 6:

   int num, rev, n;

   std::cout << "Enter a number: ";
   std::cin >> num;
   while(num>0)
    {
        n=num%10;
        rev=rev*10+n;
        num/=10;
    } 

    std::cout <<"The reverse is: " << rev << std::endl;
    break;
}
}
return 0;
}