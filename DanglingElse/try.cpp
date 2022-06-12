#include <iostream>
using namespace std;

int main()
{
    int x = 11;
    int y = 9;

    if (x < 10)
    if (y > 10)
    cout << "*****" << endl;
    else
    cout << "#####" << endl;
    cout << "$$$$$" << endl;

    cout << endl;

    x = 5;
    y = 8;

    if (y == 8)
    if (x == 5)
    cout << "@@@@@" << endl;
    else
    cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;
}