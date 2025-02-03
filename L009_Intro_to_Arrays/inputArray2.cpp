#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Array: " << endl;

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    

    return 0;
}