#include <iostream>
using namespace std;

int main()
{
    // 1. Simple Array Declaration
    int arr1[5]; // Declaring an integer array of size 5
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    arr1[4] = 5;

    cout << "Array 1 (Simple Declaration): ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // 2. Array with Initialization
    int arr2[5] = {10, 20, 30, 40, 50}; // Declaring and initializing the array

    cout << "Array 2 (Initialized Declaration): ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // 3. Array without specifying size (size inferred from the initializer)
    int arr3[] = {100, 200, 300, 400, 500}; // The size is automatically determined by the number of elements

    cout << "Array 3 (Size Inferred): ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
