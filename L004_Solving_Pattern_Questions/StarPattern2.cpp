#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter number of rows : ";
    cin >> totalRows;

    int row = totalRows;
    while (row >= 1)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row - 1;
    }
}