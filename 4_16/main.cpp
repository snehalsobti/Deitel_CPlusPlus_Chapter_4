#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hours = 0;
    double hourlyRate = 0;
    double salary = 0;

    cout << "Enter hours worked (-1 to end): ";
    cin >> hours;
    cout << setprecision(2) << fixed;
    
    while (hours != -1)
    {
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> hourlyRate;
        if (hours <= 40)
            salary = hourlyRate * hours;
        else
            salary = hourlyRate * 40 + (hours - 40) * 1.5 * hourlyRate;
        cout << "Salary is $" << salary << endl;
        cout << endl;

        cout << "Enter hours worked (-1 to end): ";
        cin >> hours;
    }
}