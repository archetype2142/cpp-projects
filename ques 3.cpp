#include <iostream>
#include <stdlib.h> 
int main(void)
{  
int num;
int digit1,sum1 = 0; 
int digit2,sum2=1; 
int n3,digit3,sum3=0; 
int digit4,sum4=0; 
int n5,digit5,sum5=0; 
char ch,ch1; 
do 
{ std::cout<<"enter your choice"; std::cout << "\n 1. Find the sum of digits \n 2. Find product of digits"; 
std::cout<<"\n 3.Check if it it is a pallindrome\n 4.Find its reverse"; 
std::cout<<"\n 5.check if it is an armstrong no."; 
std::cin >> ch;
std::cin >> num; 
switch(ch) 
{ 	case '1': while(num>0) 
{digit1 = num % 10;
num = num / 10; 
sum1 += digit1; }
std::cout << "sum is" << sum1;
break; 
	case '2': while(num>0) 
{digit2 = num % 10; num = num / 10;
sum2 = sum2 * digit2; }
std::cout << "product is" << sum2; 
break; 
	case '3': n3=num; while(num>0) 
{ digit3 = num % 10; sum3 = sum3 * 10 * digit3; num = num / 10; }
if(n3 == sum3) 
	{std::cout<<"palindrome";}
else 
 	{std::cout<<"not a palindrome";}
break;
  	case '4': while(num>0) 
{ digit4 = num % 10; sum4 = sum4 * 10 + digit4; num = num / 10; } 
	std::cout << "reverse is" << sum4; 
break; 
	case '5': n5=num; while(num>0) 
{ digit5 = num % 10; num = num / 10;
sum5 = sum5 + digit5 * digit5 * digit5; } 
	if(n5==sum5) 
		{std::cout<<"it is an armstrong no.";} 
    else 
    	{std::cout<<"not an armstrong no.";} 
    std::cout<<"\n want to try again ?";
    std::cin>>ch1; } 
    while (ch1 =='y');
}