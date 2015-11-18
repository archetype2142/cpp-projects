#include <iostream>
using namespace std;
int search(int [], int, int);
int main ()
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
	for(int i = 0; i < size; i++)
	{
		if(array[i] == item)
		{
			return i;
		}
	}

	return -1;
}