#include<iostream>
 
using namespace std;
 
 
int main(int argc, char *argv[])
{
    int a,b,c;
 
    cin>>a>>b>>c;
 
    int zbir = a+b+c;
 
    if (zbir%3 == 1) {
        cout<<"2";
    } else if (zbir%3 == 2) {
        cout<<"1";
    } else {
        cout<<"0";
    }
 
 
    return 0;
}