#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int A[10][10], r_1, c_1, choice, choice_2;

	cout << "Enter number of rows: ";
	cin >> r_1;

	cout << "Enter number of columns: ";
	cin >> c_1;

	cout << "Enter the matrix, row wise\n";
	for(int r = 0; r < r_1; r++)
	{
		for(int c = 0; c < c_1; c++)
		{
			cout << "Enter value for " << r << ", " << c << ": ";
			cin >> A[r][c];
		}	
	}

	cout << "Entered matrix is \n";
	for(int r = 0; r < r_1; r++)
	{
		cout << "\n";
		
		for(int c = 0; c < c_1; c++)
		{
			cout << A[r][c];
		}	
	}

	do
	{
		cout << "\n1. Primary diagonal.\n2. Secondary diagonal.\n3. Sum of primary diagonal.\n4. Sum of secondary diagonal.\n5. Display upper triangle.\n6. Display lower triangle.";
		cout << "\nChoice: ";
		cin >> choice;

	  	if(choice == 1)
		{
			for(int r = 0; r < r_1; r++)
			{
				for(int c = 0; c < c_1; c++)
				{	
					if(r == c)
					{	
						cout << A[r][c] << endl;
					}
				}
			}
    	}

   		else if(choice == 2)
    	{
    		for(int r = 0; r < r_1; r++)
			{
				for(int c = 0; c < c_1; c++)
				{
					if(r + c == r_1 - 1)
					{	
						cout << A[r][c] << endl;
					}
				}
			}
		}

		else if(choice == 3)
		{
			int sum_1;

			for(int r = 0; r < r_1; r++)
			{
				for(int c = 0; c < c_1; c++)
				{
					if(r == c)
					{	
						sum_1 += A[r][c];
					}
				}
			}	

	    	cout << sum_1 << endl;
    	}

    	else if(choice == 4)
    	{
    		int sum_2;
    		for(int r = 0; r < r_1; r++)
			{
				for(int c = 0; c < c_1; c++)
				{
					if(r + c == r_1 - 1)
					{	
						sum_2 += A[r][c];
					}
				}
			}	

			cout << sum_2 << endl;
		}	

		else if (choice == 5)
		for(int r = 0; r < r_1; r++)
		{
			cout << endl;		

			for(int c = 0; c < c_1; c++)
			{
				if(r <= c)
				{
					cout << A[r][c];
				}	
				else 
				{
					cout << " ";
				}
			}
		}	
	
		else if (choice == 6)
		for(int r = 0; r < r_1; r++)
		{
			cout << endl;	

			for(int c = 0; c < c_1; c++)
			{
				if(r + c <= r_1 - 1)
				{
					cout << A[r][c];
				}	
				else 
				{
					cout << " ";
				}
			}
		}  cout << "\n";
	
		cout << "Do you wanna continue? (y/n): ";
		cin >> choice_2;
	}
	
	while (choice_2 == 'y');
	
    return 0;

}