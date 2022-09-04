#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
const ll mod = 1000000007;
 
ll fac(ll n) {
    ll res = 1;
 
    for (ll i = 1; i<=n; i++) res = (res*i) % mod;
 
    return res;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n,m,d;
 
    cin>>n>>m>>d;
 
    ll dp[n+1][m+1];
 
    MS(dp, 0);
 
    for (ll i = 1; i<=n; i++) {
        for (ll j = 1; j<=m; j++) {
            if (i > j) {
                dp[i][j] = 0;
                continue;
            } else if (i == j) {
                dp[i][j] = fac(i);
                continue;
            } else if (i == 1 && d == 0) {
                dp[i][j] = 1;
                continue;
            }
 
            ll r = 0;
 
            for (ll k = i; k<=j; k++) {
                ll t = (i*dp[i-1][k-1]) % mod;
 
                for (ll h = k+1; h<=j; h++) {
                    if (h-d-1 < 0) {
                        t = 0;
                        break;
                    }
 
                    t = (t*(i-d)) % mod;
                }
 
                r = (r+t) % mod;
            }
 
            dp[i][j] = (dp[i][j] + r) % mod;
        }
    }
 
    cout<<dp[n][m]<<endl;
 
    return 0;
}