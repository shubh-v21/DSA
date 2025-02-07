#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return true;
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
    return false;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 7, 8, 9 , 11};

    bool isFound = binarySearch(arr, 8, 11);

    cout << isFound << endl;

    return 0;
}