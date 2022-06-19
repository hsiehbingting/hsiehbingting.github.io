#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    int i;
    cin >> i;

    int prime = 1;
    for (int j = 2; j < sqrt(i); j++)
    {
        if (i % j == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
        cout << "YES\n";
    else    
        cout<<"NO\n";

}