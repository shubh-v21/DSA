#include <iostream>
using namespace std;

int main()
{
    int totalRows, totalCols;
    cout << "Enter number of Rows : ";
    cin >> totalRows;
    cout << "Enter number of Columns : ";
    cin >> totalCols;

    int row = 1;

    while (row <= totalRows)
    {
        char value = 'A';
        int col = 1;
        while (col <= totalCols)
        {
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }
}