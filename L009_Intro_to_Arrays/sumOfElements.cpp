#include <iostream>
using namespace std;

int sumOfElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 5, 34, 35, 63, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of all elements of given Array is: " << sumOfElements(arr, size) << endl;
    return 0;
}