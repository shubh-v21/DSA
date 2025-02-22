#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 3, 5,5,5,5, 5, 5, 8, 9, 11};

    int index = binarySearch(arr, 12, 5);

    cout << index << endl;

    return 0;
}