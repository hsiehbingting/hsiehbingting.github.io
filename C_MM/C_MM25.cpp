#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int sum = 0;
    for (int i = 3; i <= a; i += 3)
        sum += i;
    cout << sum << endl;
}