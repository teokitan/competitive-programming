#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
 
using namespace std;
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,x,y,v;
 
    cin>>n>>x>>y>>v;
 
    swap(x,y);
 
    bool prv = true, vtor = true;
 
    if (v == 0) {
        if (y<(n-x)) vtor = false;
        if (x%2 != y%2) prv = false;
    } else {
        if (y>=(n-x)) vtor = false;
        if (x%2 == y%2) prv = false;
    }
 
    if (prv && !vtor) cout<<1;
    else if (!prv && vtor) cout<<2;
    else if (prv && vtor) cout<<3;
    else cout<<4;
}