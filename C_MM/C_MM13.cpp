#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int t1_h, t1_m, t2_h, t2_m, min;
    cin >> t1_h >> t1_m >> t2_h >> t2_m;
    min = (t2_h - t1_h) * 60 + t2_m - t1_m;
    if (min <= 120)
        cout << min / 30 * 30 << endl;
    else if (min <= 240)
        cout << 120 + (min - 120) / 30 * 40 << endl;
    else
        cout << 280 + (min - 240) / 30 * 60 << endl;
}