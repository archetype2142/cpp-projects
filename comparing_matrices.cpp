#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int A[3][3], B[3][3], r, c, flag = 0;

	cout << "Enter the first matrix: ";
	for(r = 0; r < 3; r++)
	{
		for(c = 0; c < 3; c++)
		{
			cin >> A[r][c];
		}
	}
    
    cout << "Enter the second matrix: ";
	for(r = 0; r < 3; r++)
	{
		for(c = 0; c < 3; c++)
		{
			cin >> B[r][c];
		}
	}

	for(r = 0; r < 3; r++)
	{
		for(c = 0; c < 3; c++)
		{
			if(A[r][c] == B[r][c]);
			flag = 1;
		}
	}

	if(flag = 1)
	{
		cout << "ya its same\n";
	}
}
