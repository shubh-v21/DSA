// array par apan ek loop chalaayege

#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int unique;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            unique = arr[i];
            break;
        }
    }
    return unique;
}

int main()
{
    int arr[1000];
    int size;

    cout << "Enter the size of array : ";
    cin >> size;

    if (size % 2 == 0)
    {
        cout << "Array should have odd number of elements!!" << endl;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the index " << i << " element: ";
            cin >> arr[i];
        }
        cout << findUnique(arr, size);
    }

    return 0;
}