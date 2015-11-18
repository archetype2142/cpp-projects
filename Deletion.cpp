#include <iostream>
#include <stdlib.h>

using namespace std;

int Lsearch(int [], int, int);

int main()
{
	int array[50], item, size, index;
	char choice = 'y';
	
	cout << "Enter the size of the array: ";
	cin >> size;
	for(int i = 0; i < size; i++)
	{
		cout << "Enter value for index " << i << ": ";
		cin >> array[i];
	}
	while(choice == 'y' || choice == 'Y')
	{
		cout << "Enter element to be deleted: ";
		cin >> item;
		if(size == 0)
		{
			cout << "Underflow!\n";
			exit(1);
		}

		index = Lsearch(array, size, item);
		if (index != -1)
		{
			array[index] = 0;
		}
		else
		{
			cout << "No element found.\n";
		}
		cout << "The array now -->\n";
		cout << "Zero signifies deleted elements.";
		for(int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
		
		for(int i = index; i < size; i++)
		{
			array[i] = array[i + 1];
		}
		size -= 1;
		cout << "wanna delete more elements?(y/n): ";
		cin >> choice;
	}

	cout << "Final array is -->\n";
	
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout  << endl;
	
	return 0;
}

int Lsearch(int array[], int size, int item)
{
	for (int i = 0; i < size; i++)
	{
		if(array[i] == item)
		{
			return i;
		}
	}
	return -1;
}
