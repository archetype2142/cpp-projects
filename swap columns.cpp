#include <iostream> 
using namespace std;

int main()
{
	int matrix[4][3], tmp;
	int i, j;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cout << "Enter value for " << i << ", " << j << ": ";
			cin  >> matrix[i][j];  
		}
	}
	

    for( i = 0; i < 4; i++)
	{
		for( j = 0; j < 3; j++)
		{
			tmp = matrix[0][j];
 			matrix[0][j] = matrix[4][j];
  			matrix[4][j] = tmp;
		}
	}


    for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << matrix[i][j];
		}
		cout << " \n";
    }
}
/*              
