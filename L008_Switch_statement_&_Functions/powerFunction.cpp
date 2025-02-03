#include <iostream>
using namespace std;

int power()
{
    int a, b;

    cout << "Enter the base number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;

    int result = 1;

    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    
    return result;
}

int main()
{
    cout << "The result is: " << power() << endl;
}