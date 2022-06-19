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
    for (int i = a-1; i >= 1; i--)
    {
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
        {
            cout << i << endl;
            return 0;
        }
    }
}