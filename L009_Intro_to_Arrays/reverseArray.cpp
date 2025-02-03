#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr1[] = {-1, -53, 45, 67, 342, 87, 9, 0};
    int arr2[] = {-424, -56, 5, 61, 64};

    reverseArray(arr1, 8);
    reverseArray(arr2, 5);

    printArray(arr1, 8);
    printArray(arr2, 5);

    return 0;
}