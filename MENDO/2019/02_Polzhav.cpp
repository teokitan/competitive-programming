#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000
 
using namespace std;
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int ctr,a,b;
 
    cin>>ctr>>a>>b;
 
    int res = 0;
 
    while (ctr > 0) {
        res++;
        ctr -= a;
 
        if (ctr <= 0) break;
 
        ctr += b;
    }
 
    cout<<res<<endl;
}