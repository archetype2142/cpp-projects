//convert upper case to lower and vice versa

#include <ctype.h> 
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
   char str[100];
   
   cout << "Enter a string: ";
   cin.getline(str, 100);

   for (int i = 0; str[i] != '\0'; i++)
   { 
   		if (isupper(str[i]))
    	{ 
       		str[i] = tolower(str[i]);
    	}
    	else
    	{
          str[i] = toupper(str[i]);
      }
   }

    cout << "After conversion: " << str << endl;

   return 0;   
}