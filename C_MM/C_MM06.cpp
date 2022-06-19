#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main ()
{
    double a;
    cin >> a;
    cout << fixed << setprecision(1) << (double)((int)(a*1.6*10+0.5))/10 <<endl;


    
}