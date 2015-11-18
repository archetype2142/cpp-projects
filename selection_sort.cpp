#include <iostream>

int main()
{
	int array[50], item, size, index;

	cout << "Enter the size of the array: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter value for index " << i << ": ";
		cin >> array[i];
	}

	selSort(array, size);
	cout << "After sorting: ";
	
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
	}
	cout << endl;

	return 0;
}
void selSort(int array[], int size)
{
	int small, pos, temp;
	for(int i = 0; i < size - 1; i++)
	{
		small = array[i];
		pos = i;
		for(int j = i + 1; j < size; j++)
		{
			if(array[j] < small)
			{
				small = array[j];
				pos = j;
			}
		}

		temp = array[i];
		array[i] = array[pos];
		array[pos] = temp;
		cout << "Array after sorting " << i + 1 << " is ";
		for(j = 0; j < size; j++)
		{
			cout << array[j] << " ";
		}
	}
}