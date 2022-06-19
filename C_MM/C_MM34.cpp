#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            cout << i << " ";
    cout << n << endl;
}