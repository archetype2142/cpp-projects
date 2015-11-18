//calculating factorial 

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double num, val=1; 
    cout << "Please enter a number: "; 

    cin >> num;
     for (int i = 1; i <= num; i++) 
    {
        val *= i; 
    }
        
    cout << "\n The factorial of " << num << " is " << val << endl;

return 1;

}
