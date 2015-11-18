#include <iostream>
using namespace std;

int main()
{
    int v[100], n;

    cout << "Enter the size of the vector: ";
    cin >> n;
    cout << " \n ";
   
    for (int i = 0; i < n; ++i)
    {
    	cout << "Enter value for vector " << i + 1 << ": ";
    	cin >> v[i];
    }
   
    int min = v[0];
    int max = v[0];
   
    for(int i = 0; i < n; i++)
    {
        if( v[i] < min)
        {
        	min = v[i];
        }

        else if( v[i] > max)
        {
        	max = v[i];
        }
    }  
    
    cout << "Minimum value is: " << min << endl;
    cout << "MAximum value is: " << max << endl;
}