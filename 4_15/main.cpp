#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sales = 0;
    double salary = 0;
    
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;
    cout << setprecision(2) << fixed;

    while (sales != -1)
    {
        salary = sales * 9.0 / 100 + 200;
        cout << "Salary is: $" << salary << endl;
        cout << endl;

        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
    }
}