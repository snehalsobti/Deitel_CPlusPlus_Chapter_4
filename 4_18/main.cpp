#include <iostream>
using namespace std;

int main()
{
    int N = 1;
    cout << "N\t" "10*N\t" "100*N\t" "1000*N" << endl;
    cout << endl;
    while (N <= 5)
    {
        cout << N << "\t"
            << 10*N << "\t"
            << 100*N << "\t"
            << 1000*N << endl;
        N++;
    }
}