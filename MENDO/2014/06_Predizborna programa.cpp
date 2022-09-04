#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll fac(ll n) {
    ll res = 1;
 
    for (ll i = 1; i<=n; i++) res *= i;
 
    return res;
}
 
ll bCof (ll n, ll k) {
    if (n == 0) return 0;
 
    return fac(n)/(fac(n-k)*fac(k));
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
 
    cin>>n;
 
    ll P,N,PN;
 
    cin>>P>>N>>PN;
 
    ll res = 0;
 
    for (ll i = 0; i<=min(PN, min(N, P)); i++) {
        ll pn = bCof(n, i);
 
        for (ll j = 0; j<=min(P,N)-i; j++) {
            ll po = bCof(n-i, j);
 
            if (i+j == n) {
                res += po*pn;
                continue;
            }
 
            for (ll k = 0; k<=max(N,P)-i; k++) {
                ll pk = bCof(n-i-j, k);
 
                res += pn*po*pk;
            }
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}