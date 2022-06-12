#include <iostream>
using namespace std;

int main()
{
    int counter = 1;
    int number = 0;
    int largest = INT32_MIN;
    int smallest = INT32_MAX;
    while (counter <= 10)
    {
        cout << "Enter number: ";
        cin >> number;
        if (number > largest)
            largest = number;
        if (number < smallest)
            smallest = number;
        counter++;
    }
    cout << endl;
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
}