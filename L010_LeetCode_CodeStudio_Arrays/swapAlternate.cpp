#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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
    int arrEven[] = {1, 2, 3, 4, 5, 6};
    int arrOdd[] = {1, 2, 3, 4, 5};

    swapAlternate(arrEven, 6);
    swapAlternate(arrOdd, 5);

    printArray(arrEven, 6);
    printArray(arrOdd, 5);

    return 0;
}