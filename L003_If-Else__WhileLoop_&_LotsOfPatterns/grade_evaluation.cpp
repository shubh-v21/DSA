#include<iostream>
using namespace std;

int main() { 
    
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) { // Checks if marks are 90 or above
        cout << "Grade: A" << endl;
    }
    else { 
        if (marks >= 80) { // Checks if marks are between 80 and 89
            cout << "Grade: B" << endl;
        }
        else { 
            if (marks >= 70) { // Checks if marks are between 70 and 79
                cout << "Grade: C" << endl;
            }
            else { 
                if (marks >= 60) { // Checks if marks are between 60 and 69
                    cout << "Grade: D" << endl;
                }
                else { // Executes if marks are below 60
                    cout << "Grade: F (Fail)" << endl;
                }
            }
        }
    }

    return 0;
}
