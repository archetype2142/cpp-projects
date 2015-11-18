//upper to lower case and stuff
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	char string[100], choice;
	int y;

	cout << "Enter a string: ";
	cin.getline(string, 80);

	cout << "Convert case? (y/n): ";
	cin >> choice;
	
	y = strlen(string);

	if (choice == 'n')
	{
		cout << "ok then\nKeep this with ya ";
	}

	else 
    {
     	for (int i = 0; i < y; i++)
     	{ 
   			if (isupper(string[i]))
    		{ 
       			string[i] = tolower(string[i]);
    		}
    		else
    		{
          		string[i] = toupper(string[i]);
      		}
 		}  
   }

   cout << string << "\n";

 	return 0;

    

}
