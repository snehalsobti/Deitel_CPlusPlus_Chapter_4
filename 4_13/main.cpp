#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int miles = 0;
    unsigned int totalMiles = 0;
    unsigned int gallons = 0;
    unsigned int totalGallons = 0;
    double mpg = 0;
    double totalMpg = 0;
    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;
    cout << setprecision(6) << fixed;
    while (miles != -1)
    {
        totalMiles += miles;
        cout << "Enter gallons used: ";
        cin >> gallons;
        totalGallons += gallons;
        mpg = static_cast <double> (miles) / gallons;
        cout << "MPG this trip: " << mpg << endl;
        totalMpg = static_cast <double> (totalMiles) / totalGallons;
        cout << "Total MPG: " << totalMpg << endl;
        cout << endl;

        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;
    }
}