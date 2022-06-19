#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
        cout << "fit\n";
    else
        cout << "unfit\n";
}