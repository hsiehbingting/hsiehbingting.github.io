#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main ()
{
    double a;
    cin >> a;
    
    cout << (int)(a*a*10)/10 
         << "."
         << (((int)(a*a*100)%100 > 4)? (int)(a*a*10)%10 +1 : (int)(a*a*10)%10 )
         << endl;

    
}