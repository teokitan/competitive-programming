#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
set<pair<int,pair<int,int>>> ch;
bool visP[3001][3001];
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,m;
 
    cin>>n>>m;
 
    vector<int> pat[n];
 
    for (int i = 0; i<m; i++) {
        int a,b;
 
        cin>>a>>b;
 
        pat[a].pb(b);
        pat[b].pb(a);
    }
 
    int t;
 
    cin>>t;
 
    for (int i = 0; i<t; i++) {
        int a,b,c;
 
        cin>>a>>b>>c;
 
        ch.insert({a, {b,c}});
    }
 
    bool vis[n];
    MS(vis, 0);
    MS(visP, 0);
 
    queue<int> qI, qC, qP;
    qI.push(0); qC.push(0); qP.push(0);
 
    int res = INT_MAX;
 
    while (!qI.empty()) {
        int i = qI.front(), c = qC.front(), p = qP.front();
 
        qI.pop(); qC.pop(); qP.pop();
 
        if (i == n-1) {
            res = c;
 
            break;
        }
 
        if (vis[i]) continue;
        if (visP[p][i]) continue;
 
        vis[i] = true;
        visP[p][i] = true;
 
        for (auto it:pat[i]) {
 
            if (ch.count({p, {i, it}})) {
                vis[i] = false;
                continue;
            }
 
            qI.push(it);
            qC.push(c+1);
            qP.push(i);
        }
    }
 
    if (res != INT_MAX) cout<<res<<endl;
    else cout<<"GRESHKA"<<endl;
 
    return 0;
}