#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 35; i <= a; i += 35)
    {
        cout << i;
        if (i + 35 <= a)
            cout << " ";
        else
            cout << endl;
    }
}