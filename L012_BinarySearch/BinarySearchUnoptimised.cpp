/*
Is code me ek problem hai!
agar (start + end) ki value Integer range ke bahar chali gyi toh error aa jayega.
isiliye isko solve krne ke liye apan :
{ mid = start + ((end - start) / 2) }
 likhege
*/

#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

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
        mid = (start + end) / 2;
    }
    return false;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 7, 8, 9};

    int isFound = binarySearch(arr, 7, 11);

    cout << isFound << endl;

    return 0;
}