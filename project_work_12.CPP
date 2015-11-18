//composite nos

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ 
    int i,n,factor, j;
    cout << "Enter the last number of the sequence: ";
    cin >> j;
    for(n=2;n<=j;n++)
    {
	 for(i=1;i<n;i++)
	 {
	      if(n % i == 0)
	      {
		   factor=i;/*finds the largest proper divisor*/
	      }
	 }
	 if(factor>1)
	 {
	      cout <<  n;
	 }
     }
return 0;     
}