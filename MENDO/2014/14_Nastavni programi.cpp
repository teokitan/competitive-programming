#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
string s1,s2;
ll n,m;
ll dp[1001][1001];
ll dp2[1001][1001];
 
ll f (ll i, ll j) {
    if (i == n) {
        dp[i][j] = (m-j) % 750083;
    } else if (j == m) {
        dp[i][j] = (n-i) % 750083;
    } else if (dp[i][j] == -1) {
        if (s1[i] == s2[j]) dp[i][j] = (f(i+1,j+1) + 1) % 750083;
        else dp[i][j] = (min(f(i+1,j), f(i,j+1)) + 1) % 750083;
    }
 
    return dp[i][j] % 750083;
}
 
ll c (ll i, ll j) {
    if (i == n || j == m) dp2[i][j] = 1;
 
    if (dp2[i][j] == -1) {
        if (s1[i] == s2[j]) dp2[i][j] = c(i+1,j+1) % 750083;
        else {
            if (f(i+1,j) == f(i,j+1)) dp2[i][j] = (c(i+1,j)+c(i,j+1)) % 750083;
            else if (f(i+1,j) < f(i,j+1)) dp2[i][j] = c(i+1,j) % 750083;
            else dp2[i][j] = c(i,j+1) % 750083;
        }
    }
 
    return dp2[i][j] % 750083;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>s1>>s2;
 
    n = (ll)s1.size();
    m = (ll)s2.size();
 
    for (ll i = 0; i<1001; i++) {
        for (ll j = 0; j<1001; j++) {
            dp[i][j] = -1;
            dp2[i][j] = -1;
        }
    }
 
    cout<<c(0,0) % 750083;
 
    return 0;
}