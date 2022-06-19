#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main ()
{
    int a, b = 1;
    cin >> a;
    if(a > 31)
    {
        cout << "Value of more than 31" << endl;
        return 0;
    }
    for(int i = 0; i < a; i++)
        b *= 2;
    cout << b << endl;


    
}