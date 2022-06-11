#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int accNumber = 0;
    double initBalance = 0;
    double charges = 0;
    double credits = 0;
    double credLimit = 0;

    cout << "Enter account number (or -1 to quit): ";
    cin >> accNumber;
    while (accNumber != -1)
    {
        cout << "Enter beginning balance: ";
        cin >> initBalance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credits;
        cout << "Enter credit limit: ";
        cin >> credLimit;
        
        double newBalance = initBalance + charges - credits;
        cout << setprecision(2) << fixed;
        cout << "New balance is " << newBalance << endl;

        if (newBalance > credLimit)
        {
            cout << "Account: " << accNumber << endl;
            cout << "Credit limit: " << credLimit << endl;
            cout << "Balance: " << newBalance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }

        cout << endl;

        cout << "Enter account number (or -1 to quit): ";
        cin >> accNumber;

    }
}