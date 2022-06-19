#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int u, d , h;
    cin >> u >> d >> h;
    cout << "Trapezoid area:" << (u+d)*h/2;
    if((u+d)%2 && h%2)
        cout << ".5" << endl;
    else 
        cout << ".0" << endl;
}