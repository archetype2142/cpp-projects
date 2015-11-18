//input - 11, 12, 13, 14, 15, 16, 17, 18
//expected output - 15, 16, 17, 18, 11, 12, 13, 14
#include <iostream>
#include <stdlib.h>
int main()
{
    int size, A[20], y, B[20];
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
        std::cin >> A[i];

    // Copy all values into B first
    for (int i = 0; i < size; i++)
         B[i] = A[i];

    // Now swap only within B
    for(int i = 0, j = size / 2; i < size / 2; i++, j++) 
    {
        int temp = B[i]; // Change
        B[i] = B[j]; // Change
        B[j] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << B[i];

    }
    return 0;

}


