#include <iostream>
using namespace std;

int main()
{
    int totalRow;
    cout << "Enter number of rows : ";
    cin >> totalRow;

    int row = 1;
    int value = row;
    while (row <= totalRow)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value = value - 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
        value = row;
    }
}