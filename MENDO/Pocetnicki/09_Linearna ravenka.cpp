#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    int a,b,x;
 
    cin>>a>>b;
 
    if (a != 0) {
        if (b != 0) {
            int res = 0-b;
            x = res/a;
            cout<<x;
        } else {
            cout<<"nema resenie\n";
        }
    } else {
        cout<<"nema resenie\n";
    }
 
    //a*x + b = 0
 
    return 0;
}