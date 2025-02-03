#include <iostream>
using namespace std;

// Function to take input for an integer array
void arrayInput(int arr[], int size) {
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];  // Takes input for each element
    }
}

// Function to print all elements of the integer array
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    
    // Ask user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array of the given size
    int arr[size];
    //Using variable-length arrays like int arr[size]; (where the size of the array is determined at runtime) is not recommended in C++ because it is not part of the C++ standard (although it works in many compilers). This approach can lead to undefined behavior or stack overflow when using large arrays, especially if the array size is too large for the stack.

    // Take input for the array
    arrayInput(arr, size);

    // Print the array
    printArray(arr, size);

    return 0;
}
