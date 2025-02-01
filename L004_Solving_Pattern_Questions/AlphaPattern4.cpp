#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    cout << "Enter number of rows :";
    cin >> totalRows;

    
    int row = 0;
    while (row < totalRows)
    {
        int col = 0;
        char value = 'A' + row;
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