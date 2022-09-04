#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000
 
using namespace std;
 
vector<ll> site;
ll e;
ll dp[100001];
 
ll dpF(ll a) {
    if (a > e) return INT_MAX/2;
    else if (a == e) return 0;
    else if (dp[a] != -1) return dp[a];
 
    ll best = INT_MAX/2;
 
    for (auto it:site) if (it < a) best = min(best, dpF(a+it)+1);
 
    return dp[a] = best;
}
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(dp, -1);
 
    for (ll i = 2; i<=99999; i++) {
        string str,str2;
 
        str = to_string(i);
        str2 = str;
 
        reverse(str.begin(), str.end());
 
        if (str == str2) site.pb(i);
    }
 
    ll s;
 
    cin>>s>>e;
 
    cout<<dpF(s)<<endl;
}