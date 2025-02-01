#include <iostream>
using namespace std;

int main()
{
    int order;
    cout << "Enter number of rows : ";
    cin >> order;

    int row = 1;
    while (row <= order)
    {
        int j = 1;
        while (j <= (order - row))
        {
            cout << " ";
            j = j + 1;
        }
        int i=1;
        while (i <= row)
        {
            cout << "*";
            i = i + 1;
        }
        cout << endl;
        row = row + 1;
    }
}