#include<iostream>
using namespace std;

// Function to update the array
void update(int arr[], int n) {
    cout << endl << "Inside the function update()" << endl;
    
    // Updating the first element of the array to 120
    arr[0] = 120;

    // Printing the updated array inside the function
    cout << "Updated array inside update(): ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Going back to the main function" << endl;
}

int main() {
    // Initializing an array of size 3
    int arr[3] = {1, 2, 3};

    // Printing the original array before function call
    cout << "Original array in main(): ";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calling the update function
    update(arr, 3);

    // Printing the array after the function call (changes will be visible)
    cout << endl << "Array in main() after update(): ";
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Arrays are passed by reference in C++: This means when you pass an array to a function, the function can modify the original array, and those changes will persist after the function call.