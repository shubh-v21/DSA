#include<iostream>
using namespace std;

int main() { 
    
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) { // Checks if the number is divisible by 2
        cout << "The number is even." << endl;
    }
    else { // Executes if the number is not divisible by 2
        cout << "The number is odd." << endl;
    }

    return 0;
}
