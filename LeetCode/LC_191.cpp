#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int rem;
    int count = 0;
    for (int i = n; i > 0; i = i / 2)
    {
        rem = i % 2;
        if (rem == 1)
        {
            count = count + 1;
        }

        cout << rem;
    }

    cout << endl << count << endl;
}