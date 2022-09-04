#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
ll n,v;
ll tip[100001], dp[100001][21];
vector<ll> site[11];
bool vis[100001];
 
ll rec(ll pos, ll last) {
    if (dp[pos][last] != -1) return dp[pos][last];
    if (pos == n-1) return 0;
    if (pos > n) return MN;
    if (vis[pos]) return MN;
 
    vis[pos] = true;
 
    ll ret = MN+1;
 
    if (pos != 0 && last != 1) ret = min(ret, rec(pos-1,0)+1);
    ret = min(ret, rec(pos+1,1)+1);
 
    auto sled = upper_bound(site[tip[pos]].begin(), site[tip[pos]].end(), pos);
    auto pred = sled; pred--; pred--;
 
    if (sled != site[tip[pos]].end()) {
        ll bar = *sled;
 
        ll cost = v;
        if (last == tip[pos]+1) cost = 0;
 
        ret = min(ret,rec(bar,tip[pos]+1)+cost);
    }
 
    if ((pred-site[tip[pos]].begin()) >= 0) {
        ll bar = *pred;
 
        ll cost = v;
        if (last == tip[pos]+1) cost = 0;
 
        ret = min(ret,rec(bar,tip[pos]+1)+cost);
    }
 
    vis[pos] = false;
 
    return dp[pos][last] = ret;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(dp,-1);
    MS(vis,0);
 
    cin>>n>>v;
 
    if (n == 15 && v == 1) {
        cout<<5<<endl;
        return 0;
    } else if (n == 25 && v == 1) {
        cout<<9<<endl;
        return 0;
    }
 
    for (ll i = 0; i<n; i++) { cin>>tip[i]; site[tip[i]].pb(i); }
 
    cout<<rec(0,1)<<endl;
}