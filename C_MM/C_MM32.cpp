#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    char c;
    int n = 0, sum = 0;

    cin >> c;
    sum += (c-'0')*(c-'0')*(c-'0');
    n = (n + (c - '0')) * 10;

    cin >> c;
    sum += (c-'0')*(c-'0')*(c-'0');
    n = (n + (c - '0')) * 10;

    cin >> c;
    sum += (c-'0')*(c-'0')*(c-'0');
    n = (n + (c - '0'));
    
    // cout << sum << " " << n << "\n";
    if (sum == n)
        cout << "Yes\n";
    else
        cout << "No\n";
}