#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    if(!x && !y)                cout << "Origin\n";
    else if(!x)                 cout << "y-axis\n";
    else if(!y)                 cout << "x-axis\n";
    else if(x > 0 && y > 0)     cout << "1st Quadrant\n";
    else if(x < 0 && y > 0)     cout << "2nd Quadrant\n";
    else if(x > 0 && y < 0)     cout << "4th Quadrant\n";
    else if(x < 0 && y < 0)     cout << "3rd Quadrant\n";
    
}