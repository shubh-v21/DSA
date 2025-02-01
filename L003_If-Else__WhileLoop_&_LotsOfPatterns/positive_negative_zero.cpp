#include<iostream>
using namespace std;

int main() { 
    
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) { // Checks if the number is positive
        cout << "The number is positive." << endl;
    }
    else if (num < 0) { // Checks if the number is negative
        cout << "The number is negative." << endl;
    }
    else { // Executes if the number is zero
        cout << "The number is zero." << endl;
    }

    return 0;
}
