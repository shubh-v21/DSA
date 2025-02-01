#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount of money you have: ";
    cin >> amount;

    int hundred, fifty, twenty, ten, one;

    hundred = amount / 100;

    fifty = (amount - hundred * 100) / 50;

    twenty = (amount - hundred * 100 - fifty * 50) / 20;

    ten = (amount - hundred * 100 - fifty * 50 - twenty * 20) / 10;

    one = (amount - hundred * 100 - fifty * 50 - twenty * 20 - ten * 10) / 1;

    cout << "Hundred : " << hundred << endl;
    cout << "Fifty : " << fifty << endl;
    cout << "Twenty : " << twenty << endl;
    cout << "Ten : " << ten << endl;
    cout << "One : " << one << endl;
}