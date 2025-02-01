#include <iostream>
using namespace std;

int main()
{
    int n, digit, prod;
    cout << "Enter the number : ";
    cin >> n;

    prod = 1;
    int sum =0;

    for (int i = 1; i <= n; i = i * 10)
    {
        digit = (n / i) % 10;
        prod = prod * digit;
        sum = sum + digit;
        // cout << digit << endl;
    }

    cout << sum << endl;
    cout << prod << endl;

    cout << prod - sum ;


}