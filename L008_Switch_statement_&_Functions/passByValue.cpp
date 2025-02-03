#include <iostream>
using namespace std;

// Function to modify the value by doubling it
// Since C++ uses pass by value by default, this function only modifies a local copy of 'x'
int modifyValue(int x)
{
    x = x * 2; // Modify the local copy of 'x', not the original variable
    return x;  // Return the modified value
}

int main()
{
    int num = 10; // Initialize 'num' with 10

    // Display the initial value of 'num'
    cout << "Before function call: num = " << num << endl;

    // Call modifyValue, but don't store the returned value, so 'num' remains unchanged
    modifyValue(num);

    // Display 'num' again to show that it remains unchanged
    cout << "After function call: num = " << num << endl;

    // Call modifyValue and store the returned value in 'num', effectively modifying it
    num = modifyValue(num);

    // Display 'num' to show that its value is now updated
    cout << "After re-assigning the value: num = " << num << endl;

    return 0; // Indicate successful execution
}
