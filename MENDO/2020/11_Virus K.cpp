#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MN 1000000000
#define MS(x,y) memset((x), (y), sizeof((x)))
  
using namespace std;
  
ll s,n,m;
ll najbrzo = MN*10000;
vector<pair<ll, pair<ll,ll>>> pat[5001];
bool vis[5001];
  
void dfs (ll i, ll pari, ll vreme) {
    if (i == n-1) {
        if (pari > s) return;
  
        najbrzo = min(najbrzo, vreme);
        return;
    }
  
    for (auto it:pat[i]) {
        auto next = it.first, vremeNext = it.second.first, pariNext = it.second.second;
  
        if (vis[next]) continue;
        if (pari+pariNext > s) continue;
        if (vreme+vremeNext > najbrzo) continue;
  
        vis[next] = true;
        dfs(next, pari+pariNext, vreme+vremeNext);
        vis[next] = false;
    }
}
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    MS(vis, 0);
  
    cin>>s>>n>>m;
  
    for (ll i = 0; i<m; i++) {
        ll a,b,c,d;
  
        cin>>a>>b>>c>>d;
  
        a--; b--;
  
        pat[a].pb({b, {c,d}});
        pat[b].pb({a, {c,d}});
    }
  
    dfs(0,0,0);
  
    if (najbrzo != MN*10000) cout<<najbrzo<<endl;
    else cout<<-1<<endl;
}