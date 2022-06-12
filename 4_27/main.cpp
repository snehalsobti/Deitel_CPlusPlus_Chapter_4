#include <iostream>
using namespace std;

int main()
{
    int binaryNumber = 0;

    cout << "Enter a binary integer: ";
    cin >> binaryNumber;

    int decimalNumber = 0;
    int counter = 0;
    int lastDigit = 0;
    int term = 1;

    while (binaryNumber != 0)
    {
        lastDigit = binaryNumber % 10;
        for (int i = 0; i < counter; i++)
            term *= 2;
        if (lastDigit == 1)
            decimalNumber += term;
        term = 1;
        counter++;
        binaryNumber /= 10;
    }

    cout << "Decimal equivalent: " << decimalNumber << endl;
}