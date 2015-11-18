// Calculating the average temperature for the week
// Q6
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float avg = 0.0;
    int arr[10];

    // Collect all temperatures first
    cout << "Enter temperatures for the week\n";
    for (int i = 1; i < 8; i++) 
    {
        cout << "Day " << i << ": ";
        cin >> arr[i];
    }

    // Now compute the average
    for (int i = 0; i < 7; i++)
        avg += (float)arr[i];
    avg /= 7.0;

    // Now display
    cout << "The average is " << avg << "\n";
    
}