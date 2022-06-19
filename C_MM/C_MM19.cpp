#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cin >> x;

    if (x <= 800)
        cout << fixed << setprecision(1)
             << 0.9 * x << endl;
    else if (x < 1500)
        cout << fixed << setprecision(1)
             << 0.9 * 0.9 * x << endl;
    else
        cout << fixed << setprecision(1)
             << 0.9 * 0.79 * x << endl;
}