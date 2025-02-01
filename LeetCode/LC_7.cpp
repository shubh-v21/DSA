#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;

    if (x < 0)
    {
        x = -x;

        int power = 1; // Start with 10^0
        while (power <= x)
        {
            power *= 10; // Multiply by 10 to reach the next power
        }

        power = power / 10;

        int dig;
        int ans = 0;

        while (power > 0)
        {
            dig = x % 10;
            ans = ans + dig * power;

            power = power / 10;
            x = x / 10;
        }

        ans = -ans;

        if (ans < -pow(2,31)){
            cout << "Overflow";
        }

        cout << ans << endl;
    }

    else
    {
        int power = 1; // Start with 10^0
        while (power <= x)
        {
            power *= 10; // Multiply by 10 to reach the next power
        }

        power = power / 10;

        int dig;
        int ans = 0;

        while (power > 0)
        {
            dig = x % 10;
            ans = ans + dig * power;

            power = power / 10;
            x = x / 10;
        }

        if (ans > pow(2,31) - 1){
            cout << "Overflow";
        }

        cout << ans << endl;
    }

    return 0;
}
