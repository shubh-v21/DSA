#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << n << "C" << r << " = " << ncr(n, r) << endl;
}