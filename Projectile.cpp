#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
    std::cout<<"hello goodmorning :)"<<std::endl;  // In modern C++, cout lives in the std namespace
	int num; //random_first_number
	int initial_velocity; //initial_velocity
	int time; //time
	int angle; //angle
	float g = 9.8;
	float double ; //degrees_to_radians
	std::cout<<"Enter a number :";
	std::cin>>num; 
	std::cout<<"The number you entered was "<<std::endl;
    std::cout<<"                PROJECTILE "<<std::endl;
    std::cout<<"Calculate Range-"<<std::endl;
    std::cout<<"Enter initial velocity of the projectile(m/s):";
    std::cin>>initial_velocity;
    std::cout<<"Enter the total time of the projectile before it touches the ground(seconds):";
    std::cin>>time;
    std::cout<<"Enter the angle made with the ground(degrees):";
    std::cin>>angle;
    std::cout<<"Range of the projectile is :";
    std::cout<<(int(initial_velocity) * int(initial_velocity) * sin(int(angle)) / float(g));
    return 0;
}