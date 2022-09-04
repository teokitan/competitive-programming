#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    int a,b,lapnal = 0;
    cin>>a>>b;
 
    if (a>b) {
        while (a>b) {
            a--;
            b++;
        }
        lapnal = abs(a-b);
        b -= lapnal;
    }
 
    if (b>a) {
        while (b>a) {
            a++;
            b--;
        }
        lapnal = abs(b-a);
        a -= lapnal;
    }
 
    cout<<a*7;
 
    return 0;
}