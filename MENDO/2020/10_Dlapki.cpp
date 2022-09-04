#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MN 1000000000
#define MS(x,y) memset((x), (y), sizeof((x)))
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n,m;
    cin>>n>>m;
  
    ll mat[n][m];
  
    for (ll i = 0; i<n; i++) {
        for (ll j = 0; j<m; j++) {
            cin>>mat[i][j];
        }
    }
  
    vector<ll> res;
  
    for (ll i = 0; i<n; i++) {
        for (ll j = 0; j<m; j++) {
            ll a = INT_MAX, b = INT_MAX, c = INT_MAX, d = INT_MAX;
  
            if (i != 0) a = mat[i-1][j]-mat[i][j];
            if (j != 0) b = mat[i][j-1]-mat[i][j];
            if (i != n-1) c = mat[i+1][j]-mat[i][j];
            if (j != m-1) d = mat[i][j+1]-mat[i][j];
  
            if (a < 1 || b < 1 || c < 1 || d < 1) continue;
  
            res.pb(min(min(a,b),min(c,d)));
        }
    }
  
    sort(res.rbegin(), res.rend());
  
    if (res.empty()) cout<<-1<<endl;
    else for (auto it:res) cout<<it<<" ";
}