#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << setiosflags(ios::uppercase)
         << hex << x << endl;
}