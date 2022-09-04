#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    int n;
 
    cin>>n;
 
    int niz[10000];
 
    niz[0] = 0;
    niz[1] = 1;
 
    cout<<1<<endl;
 
    int i = 2;
 
    while (niz[i-1]<=n) {
        niz[i] = niz[i-1] + niz[i-2];
        if(niz[i] <= n)
            cout<<niz[i]<<endl;
 
        i++;
    }
 
    return 0;
}