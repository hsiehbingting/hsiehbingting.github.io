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
    for (int i = 1; i <= a; i++)
        cout <<i<<"*"<<i<<"="<< i*i << endl;
}