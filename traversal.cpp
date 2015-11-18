#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int array[50], size, index;
	cout << "Enter the size of the array: ";
	cin >> size;
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the element at index " << i << ": ";
		cin >> array[i];
	}
	cout << "Adding 1 to all the elements.\n";
	for(int i = 0; i < size; i++)
	{
		array[i] += 1;
		cout << array[i] << "\n";
	}
	cout << endl;

	return 0;
}