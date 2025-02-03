#include <iostream>
using namespace std;

// Function to print all elements of an integer array
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to print the array
    printArray(arr, size);

    return 0;
}
