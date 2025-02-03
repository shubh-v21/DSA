#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int size)
{

    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int size)
{

    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to be added to array: ";
        cin >> num[i];
    }

    cout << "Minimum number in the given array is " << getMin(num, size) << endl;

    cout << "Maximum number in the given array is " << getMax(num, size) << endl;

    return 0;
}