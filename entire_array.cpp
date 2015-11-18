#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{  
	int choice;
	cout << "select any one\n1. Sum of 2 matrices.\n2. Sum of row and columns.\n";
	cout << "Choice: ";
	cin >> choice;

	if(choice == 1)
    //SUM OF 2 MATRICES
    {
    	int A[10][10], B[10][10], C[10][10], r1, r2, c1, c2, i, j, p, q, r, s;

    	cout << "Enter the number of rows and columns of Matrice 1: ";
    	cin >> r1 >> c1;

    	cout << "Enter the number of rows and columns of Matrice 2: ";
    	cin >> r2 >> c2;

    	if (((r1 == r2) && (c1 == c2)))
    	{	
    		cout << "Addition possible\n";
	    }

    	else
    	{
    		cout << "Addition isn't possible\n";
    		exit(0);
    	}

    	cout << "Enter elements for matrice 1: \n";
     
    	//Taking matrice 1 from user
    	
    	for(i = 0; i < r1; i++)
    	{
    		for(j = 0; j < c1; j++)
    		{
    			cout << "Enter value for " << i << ", " << j << ": ";
    			cin >> A[i][j];
    		}
    	}

    	cout << "Enter the elements of matrice 2: \n";
    	//Taking matrice 2 from user
    	for(p = 0; p < r2; p++)
    	{
    		for(q = 0; q < c2; q++)
    		{
    			cout << "Enter value for " << p << ", " << q << ": ";
    			cin >> B[p][q];
    		}
    	}

    	//adding them together
    	for(r = 0; r < r1; r++)
    	{	
    		for(s = 0; s < c1; s++)
    		{
    			C[r][s] = A[i][j] + B[p][q];
    		}
    	}

    	//displaying output 
    	cout << "sum of 2 matrices is: ";
     	
     	for(r = 0; r < r1; i++)
    	{
    		cout << "\n";
    		for(s = 0; s < c1; s++)
    		{	
    			cout << C[r][s];
			}
		}
 	}	
 	
 	if(choice == 2)
 	{
 		int A[10][10], i, j, r[10], c[10], row, col;
        
        cout << "Enter the number of rows: ";
		cin >> row;

        cout << "Enter the number of columns: ";
        cin >> col;
        
        for(i = 0; i < row; i++)
        {
        	for(j = 0; j < col; j++)
        	{
        		cout << "Enter the element " << i << ", " << j << ": ";
        		cin >> A[i][j];
        	}
        }
 		
 		cout << "Given matrix is: ";
 		for(i = 0; i < row; i++)
 		{
 			cout << "\n";
 			for(j = 0; j < col; j++)
 			{
 				cout << A[i][j] << " ";
 			}
 		}
 		for(i = 0; i < row; i++)
 		{
 			r[i] = 0;
 			for(j = 0; j < col; ++j)
 			{
 				r[i] += A[i][j];
 			}
 		}
 		for(j = 0; j < col; ++j)
 		{
 			c[j] = 0;
 			for(i = 0; i < row; i++)
 			{
 				c[j] += A[i][j];
 			}
 		}
 		for(i = 0; i < row; ++i)
 		{
 			cout << "\nSum of row #" << i + 1 << " is: " << r[i];
 		}
 		for(i = 0; i < col; ++i)
 		{
 			cout << "\nSum of column #" << i + 1 << " is: " << c[i];
 		}
	}   cout << "\n";
 	
 	return 0;
}





























