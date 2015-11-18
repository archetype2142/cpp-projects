#include <iostream>
using namespace std;

// output contents of array to screen
void printArray(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
    	cout << arr[i] << ' ';
    }
    cout << endl;
}

// function to swap two elements of an array
void swapArrayElements (int digits[], int index1, int index2) {
	int temp = 0;
	temp = digits[index1];
	digits[index1] = digits[index2];
	digits[index2] = temp;
}

// test the swapArrayElements function
int main() {
	int arr[4] = { 6, 2, 5, 1 };

	cout << "The original array is:\t";
	printArray(arr, 4);

	swapArrayElements(arr, 0, 3);
	cout << "The swapped array is:\t";
	printArray(arr, 4);

	return 0;
}
