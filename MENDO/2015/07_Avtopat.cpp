#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll t1,t2,k,n;
ll niza[10001];
bool vis[10001];
vector<pair<ll,ll>> pat[10001];
 
void dfs(int s) {
    if (vis[t2]) return;
 
    for (auto it:pat[s]) {
        if (vis[it.first]) continue;
 
        if (it.first > s) niza[it.first] = it.second + niza[s];
        else niza[it.first] = niza[s] - it.second;
 
        vis[it.first] = true;
        dfs(it.first);
    }
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>t1>>t2>>k>>n;
 
    if (t1 > t2) swap(t1,t2);
 
    for (ll i = 0; i<n; i++) {
        ll a,b,c;
 
        cin>>a>>b>>c;
 
        pat[a].pb({b,c});
        pat[b].pb({a,c});
    }
 
    niza[t1] = 0;
 
    MS(niza, -1);
    MS(vis, 0);
 
    dfs(t1);
 
    if (vis[t2]) cout<<niza[t2]+1<<endl;
    else cout<<-1<<endl;
 
    return 0;
}