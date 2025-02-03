#include <iostream>
using namespace std;

// Function to count set bits using bitwise operations
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += (n & 1); // Add 1 if the last bit is set
        n >>= 1; // Right shift n by 1
    }
    return count;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Number of set bits: " << countSetBits(num) << endl;
    return 0;
}
