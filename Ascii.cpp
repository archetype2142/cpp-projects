#include <iostream.h> 
#include <conio.h>
#include <math.h>
void main() 
{ clrscr(); 
	int i,j; 
	for(i=1;i<=40;) 
	{ if(i%2==0) 
		{ j = -i; std::cout << j << " "; }
		 else 
		 	{ std::cout <<i<<" "; i += 3; }
	}	 	 
	getche(); 
}