#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter number of rows : ";
    cin >> totalRows;

    int row = 1;

    while (row <= totalRows)
    {
        int col1 = 1;
        while (col1 <= (totalRows - row))
        {
            cout << " " << " ";
            col1 = col1 + 1;
        }
        int col3 = 1;
        int value1 = 1;
        while (col3 <= row - 1)
        {
            cout << value1 << " ";
            value1 = value1 + 1;
            col3 = col3 + 1;
        }

        int col2 = 1;
        int value = row;
        while (col2 <= row)
        {
            cout << value << " ";
            value = value - 1;
            col2 = col2 + 1;
        }
        cout << endl;
        row = row + 1;
    }
}