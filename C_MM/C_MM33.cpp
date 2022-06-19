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
    for (int i = 2; i <= n; i++)
    {
        int sum = 0;        
        for (int j = 1; j < i; j++)
            if (i % j == 0)
                sum += j;
                
        if (sum == i)
        {
            if (sum == 6)
                cout << i;
            else
                cout << " " << i;
        }        
    }
    cout << endl;
}