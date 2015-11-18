#include <iostream>
using namespace std;wr

int main()
{
	int change (int);
	int size, y;
	int array[20];

	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements: ";

	for (int i = 0; i < size; i++)
	{
		
		cin >> array[i];
    }

    for (int i = 0; i < size; ++i)
    {
    	y = change(array[i]);
    	
   		cout << "New values " << y << 
   		endl;
    }

    
}

int change(int e)
{

	if (e % 7 == 0)
	{
		e = e / 7;
	}

	else
	{
		e = e * 3;
	}
}
