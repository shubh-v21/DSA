/*
XOR operator ka use kiya gaya hai
ab kyuki same numbers ka XOR humesha 0 hota hai,
say , a^a=0 ,
aur 0 ke sath kisi element ka XOR wo same element return hota hai,
say , 0^a=a ,
toh maan le 5 elemnents hai array me : 1 2 3 2 1
ab hum XOR of all elements ko find karna chahte hai
1^2^3^2^1=(1^1)^(2^2)^3 = 0^0^3 = 3
3 is the unique element.
*/

#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
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