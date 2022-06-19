#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int d, h;
    cin >> d >> h;
    cout << d*h/2;
    if(d%2 && h%2)
        cout << ".5" << endl;
    else 
        cout << ".0" << endl;
}