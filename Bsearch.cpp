#include <iostream>

using namespace std;

int search(int [], int, int);
int main()
{
	int array[50], item, size, index;
	
	cout << "Enter size of the array: ";
	cin >> size;
	
	for(int i = 0; i < size; i++)
	{
		cout << "Enter value for index " << i << ": ";
		cin >> array[i];
	}
	
	cout << "Enter the element to be searched: ";
	cin >> item;
	
	index = search(array, size, item);
	
	if(index == -1)
	{
		cout << "Sorry, element not found.\n";
	}
	
	else 
	{
		cout << "Element found at index: " << index << ", position: " << index + 1 << "\n"; 
	}

	return 0;
}

int search(int array[], int size, int item)
{
	int beg, last, mid;
	beg = 0; 
	last = size - 1;
	while(beg <= last)
	{
		mid = (beg + last) / 2;
		if(item == array[mid])
		{
			return mid;
		}
		else if(item > array[mid])
		{
			beg = mid + 1;
		}
		else 
		{
			last = mid - 1;
		}
	}
	return -1;
}