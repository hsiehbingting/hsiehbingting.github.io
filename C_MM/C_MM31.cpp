#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int a, sum = 0;
    cin >> a;
    for (int i = 6; i <= a; i += 12)
    {
        sum += i;
    }
    cout << sum << endl;
}