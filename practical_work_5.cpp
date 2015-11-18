//print sum of diagonal

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int row, col, arr[50][50], sum = 0;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;
    
    for(int i = 0; i < row; i++)
    {
    	for(int j = 0; j < col; j++)
        {
        	cout << "Value of " << i << " , " << j << " : ";
	        cin >> arr[i][j];
	    }
	}
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(i == j)
			{
				
			    sum += arr[i][j];
			}
		}
	}

	cout << "sum of diagonal = " << sum <<" \n ";
    

return 0;
}