#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a five-digit number: ";
    cin >> number;
    int digOnes = 0;
    int digTens = 0;
    int digHund = 0;
    int digThous = 0;
    int digTenThous = 0;

    digOnes = number % 10;
    number /= 10;
    digTens = number % 10;
    number /= 10;
    digHund = number % 10;
    number /= 10;
    digThous = number % 10;
    number /= 10;
    digTenThous = number % 10;

    if (digOnes == digTenThous && digTens == digThous)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is NOT a palindrome." << endl;
}