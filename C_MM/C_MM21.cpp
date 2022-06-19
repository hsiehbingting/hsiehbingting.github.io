#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
    int n;
    long long int x = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        x *= i;
    cout << x << endl;
}