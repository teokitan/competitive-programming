#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n, m;
 
    cin>>n>>m;
 
    vector <ll> pat[n];
 
    for (ll i = 0; i<m; i++) {
        ll a,b;
 
        cin>>a>>b;
 
        pat[a].pb(b);
        pat[b].pb(a);
    }
 
    bool vis[n];
 
    MS(vis, 0);
 
    ll ctr = -1;
    ll lugje[n];
 
    MS(lugje, 0);
 
    for (ll i = 0; i<n; i++) {
        if (vis[i]) continue;
 
        ctr++;
 
        queue<ll> qI;
 
        qI.push(i);
 
        while (!qI.empty()) {
            ll curr = qI.front();
 
            qI.pop();
 
            for (auto it:pat[curr]) {
                if (!vis[it]) {
                    vis[it] = true;
                    qI.push(it);
                    lugje[ctr]++;
                }
            }
        }
 
        if (lugje[ctr] == 0) lugje[ctr] = 1;
    }
 
    ll res = 0;
 
    for (ll i = 0; i<ctr; i++) { res += lugje[i] * (n-lugje[i]); n -= lugje[i]; }
 
    cout<<res<<endl;
 
    //4999949998
 
    return 0;
}