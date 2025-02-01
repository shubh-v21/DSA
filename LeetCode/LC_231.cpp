#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter : ";
    cin >> n;

    int m = n;

    while (m != 0)
    {
        if (m == 1)
        {
            cout << n << " is a power of 2";
            break;
        }
        m = m >> 1;
    }
    
}