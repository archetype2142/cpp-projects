#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int vec[20], len, flag = 0;

	cout << "Enter length of the vector:"; 
	cin >> len;

	cout << "Enter the elements: ";
	for (int i = 0; i < len; i++)
	{
		cin >> vec[i];
	}

	for(int i = 0; i < len - 1; ++i)
	{
		for(int j = i + 1; j < len; ++j)
		{
			if(vec[i] == vec[j])
			{
				len = len - 1;
				for(int k = j; k < len; ++k)
				{
					vec[k] = vec[k + 1];
					flag = 1;
				}
			}
		}
	}

	if(flag == 0)
	{
		cout << "\nAre you blind bitch? there are no dupes :|";
	}

	else
	{
		cout << "\nAfter remoovin' yo dupes ze vector beCUM leik thiz yo: ";
		for(int i = 0; i < len; ++i)
		{
			cout << vec[i];
		}
	} cout << "\n";
	return 0;
}
