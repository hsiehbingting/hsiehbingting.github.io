#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
    int a, b; //工時, 時薪
    cin >> a >> b;
    if (a <= 60)
        cout << fixed << setprecision(1)
             << a * b << endl;
    else if (a <= 120)
        cout << fixed << setprecision(1)
             << 60 * b + (a - 60) * 1.33 * b << endl;
    else
        cout << fixed << setprecision(1)
             << 60 * b + 60 * 1.33 * b + (a - 120) * 1.66 * b << endl;
}