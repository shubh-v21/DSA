#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter number of rows :";
    cin >> totalRows;

    char value = 'A';
    int row = 1;
    while (row <= totalRows)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}