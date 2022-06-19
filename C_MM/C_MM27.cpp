#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int max = std::max(a, b);
    int min = std::min(a, b);
    cout << (a + b) * (max - min + 1) / 2 << endl;
}