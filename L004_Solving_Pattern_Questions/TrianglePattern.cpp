#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows : ";
    cin >> row;

    int i = 1;
    while (i <= row)
    {
        int j = 1;
        while (j <= i)
        {
            cout << '*' << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}