#include <iostream>
using namespace std;

int charToASCII()
{
    char inputChar;
    cout << "Enter the character : ";
    cin >> inputChar;
    return inputChar;
}

int main()
{
    int result = charToASCII();
    cout << "The ASCII value of the character is : " << result << endl;
}