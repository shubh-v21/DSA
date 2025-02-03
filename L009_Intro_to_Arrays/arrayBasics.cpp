#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    cout << arr1 << endl;    // Prints address of first element, NOT array elements ,is equivalent to cout << &arr1[0];
    cout << arr1[1] << endl; // Prints 2, the second element of the array
    cout << arr1[4] << endl; // Prints 5, the fifth element of the array
    cout << arr1[5] << endl; // Prints 0, out of bounds, undefined behavior

    cout << endl;

    int arr2[45] = {5};
    cout << arr2[20] << endl; // Prints 0, because only arr2[0] is initialized with 5, others are initialized to 0 by default

    cout << endl;

    int arr3[] = {1, 4, 6, 74, 53, 5};
    cout << sizeof(arr3) << endl;
    // The sizeof operator in C++ is used to determine the size (in bytes) of a data type or variable.
    cout << sizeof(arr3)/sizeof(int) << endl; //Prints the size of array
}
