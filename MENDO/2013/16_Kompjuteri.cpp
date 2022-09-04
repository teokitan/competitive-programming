#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll prv,vtor;
 
    cin>>prv>>vtor;
 
    ll ctr = 0;
 
    while ((vtor-prv) > 7 && (vtor/2) > prv) {
        ctr += vtor % 2;
        vtor /= 2;
        ctr++;
    }
 
    ctr += (vtor-prv)/2 + (vtor-prv)%2;
 
    cout<<ctr<<endl;
 
    return 0;
}