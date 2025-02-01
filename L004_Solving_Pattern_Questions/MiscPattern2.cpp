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
        int value1 = 1;
        int col1 = 1;
        while (col1 <= (totalRows - row + 1))
        {
            cout << value1 << " ";
            value1 = value1 + 1;
            col1 = col1 + 1;
        }

        int col2 = 1;
        while (col2 <= row - 1)
        {
            cout << "*" << " ";
            col2 = col2 + 1;
        }

        int col3 = 1;
        while (col3 <= row - 1)
        {
            cout << "*" << " ";
            col3 = col3 + 1;
        }

        int col4 = 1;
        int value2 = totalRows - row + 1;
        while (col4 <= totalRows - row + 1)
        {
            cout << value2 << " ";
            value2 = value2 - 1;
            col4 = col4 + 1;
        }

        cout << endl;
        row = row + 1;
    }
}