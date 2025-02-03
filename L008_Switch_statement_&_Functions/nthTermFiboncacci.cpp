#include <iostream>
using namespace std;

int nthTermFibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    int lastTerm = 1;
    int secondLastTerm = 0;
    int a = 0;

    for (int i = 1; i <= n - 2; i++)
    {
        a = lastTerm + secondLastTerm;
        secondLastTerm = lastTerm;
        lastTerm = a;
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter the position of the term in the Fibonacci sequence: ";
    cin >> n;
    cout << endl
         << "The " << n << "th term of the Fibonacci sequence is: " << nthTermFibonacci(n);
}