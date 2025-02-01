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
        while (i <= col)
        {
            cout << j<<" ";
            i++;
        }
        cout << endl;
        j++;
    }
}