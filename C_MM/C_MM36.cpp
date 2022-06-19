#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 12:
    case 1:
    case 2:
        cout << "Winter\n";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Spring\n";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer\n";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Autumn\n";
        break;
    default:
        break;
    }
}