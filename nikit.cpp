#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

int main()
{
	 
	char x[20];
	int x1;
	
	cout<<"enter a string ";
	cin.getline(x, 20);
	
	for(int i=0;i!='\0';i++)
	{
		if(islower(x[i]))
		x[i]=toupper(x[i]);
	}
	x1 = strlen(x);
	cout << x1;

}