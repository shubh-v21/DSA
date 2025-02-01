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

    char value = 'A';
    while (row <= totalRows)
    {

        int col = 1;
        while (col <= totalCols)
        {
            cout << value;
            col = col + 1;
        }
        cout << endl;
        value = value + 1;
        row = row + 1;
    }
}