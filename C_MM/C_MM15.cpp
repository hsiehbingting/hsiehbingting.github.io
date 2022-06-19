#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (0 <= x && x <= 100 && 0 <= y && y <= 100)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
}