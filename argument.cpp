#include <iostream>
#include <stdlib.h>
#include <string.h>
int main()
{
  	
}
int reverse(int arr[], int n)
	{
		int temp;

		for(int i = 0, j = n - 1; i < n / 2; i++, j--)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}

return 0;
