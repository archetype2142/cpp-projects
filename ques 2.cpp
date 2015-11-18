#include <iostream>
#include <stdlib.h> 
#include <math.h>
 jju dj{
int choice ; 
float a , l , b , r , s1 , s2 , s3 , s ; 
float area ;  
float pi = 3.14 ; 
std::cout << "Enter your choice . Area of :"<< std::endl; 
std::cout << "1.Rectangle"<< std::endl; 
std::cout << "2.Circle"<< std::endl; 
std::cout << "3.Triangle"<< std::endl; 
std::cin >> choice ; 
if (choice = '1') 
{ std::cout << "enter length of the rectangle :"<< std::endl; 
std::cin >> l;
std::cout << "enter breadth of the rectangle :"<< std::endl; 
std::cin >> b; 
area = l * b;
std::cout << "Area of the rectangle = "<< area << " sq. units " << std::endl; 
} 
else if (choice = '2' ) 
	{ std::cout << "Enter radius of circle " << std::endl;
	 std::cin >> r ; 
	 area = pi * r * r ;
	  std::cout << "Area of the circle= " << area << " sq. units" << std::endl; 
	} 
else if (choice = '3' ) 
	{ std::cout << "Enter length of three sides of the triangle :" << std::endl; 
      std::cin >> s1 >> s2 >>s3 ; 
      s = ( s1 + s2 + s3) / 2 ;
       a=sqrt ( s * ( s - s1 ) * ( s - s2 ) * ( s - s3 ));
        std::cout << "Area of the triangle= " << area << " sq. units " << std::endl; 
    } 
else 
	{ std::cout << "Invalid choice !" << std::endl; 
    } 
}