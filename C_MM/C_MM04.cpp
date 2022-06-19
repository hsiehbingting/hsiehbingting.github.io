#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int a, b;
    cin >> a >> b;
    
    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
    cout << a << "/" << b << "=" 
         << ((a>0)? a/b : a/b-1) << "..."
         << ((a>0)? a%b : a%b+b) << endl;
    
}