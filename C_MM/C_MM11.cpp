#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    cout << "NT10=" << a/10 << endl;
    a %= 10;
    cout << "NT5="  << a/5  << endl;
    a %= 5 ;
    cout << "NT1="  << a    << endl;


    
}