#include <iostream>
using namespace std;

int main()
{
    int order;
    cout << "Enter order of Matrix : ";
    cin >> order;

    int count = 1;

    int j = 1;

    while (j <= order)
    {
        int i = 1;
        while (i <= order)
        {
            cout << count << " ";
            count++;
            i = i + 1;
        }
        cout << endl;
        j = j + 1;
    }
}