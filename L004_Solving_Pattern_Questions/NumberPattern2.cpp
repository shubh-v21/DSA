#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;

    int j = 1;

    while (j <= row)
    {
        int i = 1;
        int k=col;
        while (i <= col)
        {
            cout << k<<" ";
            i++;
            k--;
        }
        cout << endl;
        j++;
    }
}