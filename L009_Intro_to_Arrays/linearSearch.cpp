#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num;
    cout << "Enter a number to search: ";
    cin >> num;

    bool isFound = linearSearch(arr, size, num);

    if (isFound)
    {
        cout << "Element is present in array" << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}