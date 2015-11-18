//armstrong or not

#include <iostream>

using namespace std;

int main()
{

   int s, n, m, r;
   cout << "Enter the number ";
   cin >> n;
   cout << "Entered number is  "<< n <<endl;
   s = 0;
   m = n;
 do
 {
 	r=n%10;
 	n=n/10;
 	s=s+r*r*r;
 }
 while (n!=0);
	if(s==m)
		cout <<"This is Armstrong number \n";
	else
		cout <<"This is not Armstrong number \n";
return 0;
}