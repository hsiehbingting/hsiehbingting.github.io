#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = min(x, y);; i--)
        if (x % i == 0 && y % i == 0)
        {
            cout << i << endl;
            break;
        }
}