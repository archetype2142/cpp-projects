#include <iostream>
#include <stdlib.h>

using namespace std;

int findPos(int [], int, int);
int main()
{
	int array[50], size, item, index;
	cout << "Enter the size of the array: ";
	cin >> size;
	for(int i = 0; i < size; i++)
	{
		cout << "Enter value for index " << i << ": ";
		cin >> array[i]; 
	}
	char ch = 'y';
	while(ch == 'y' || ch == 'Y')
	{
		cout << "Enter element to be inserted: ";
		cin >> item;
		if(size == 50)
		{
			cout << "overflow\n";
			exit(1);
		}
		index = findPos(array, size, item);
		for(int i = size; i < index; i--)
		{
			array[i] = array[i - 1];
		}
		array[index] = item;
		size += 1;
		cout << "Want to insert more elements?(y/n): ";
		cin >> ch;
	}

	cout << "The array now is as shown below\n";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
	return 0;
}
int findPos(int array[], int size, int item)
{
	int pos;
	if(item < array[0])
	{
		pos = 0;
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] <= item && item < array[i + 1])
			{
				pos = i + 1;
				break;
			}
		
			if (i == size - 1)
			{
				pos = size;
			}
 		}
 	}
	return pos;
}