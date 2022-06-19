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
    if (n % 400 == 0)
        cout << "Bissextile Year\n";    
    else if (n%100 == 0)
        cout << "Common Year\n";
    else if (n%4 == 0)
        cout << "Bissextile Year\n"; 
    else
        cout << "Common Year\n";
}