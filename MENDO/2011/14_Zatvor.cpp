#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll n,m;
ll res[1001][1001];
char mat[1001][1001];
ll dist[1001][1001];
 
void dijkstra(ll sI, ll sJ) {
    MS(dist, 0);
 
    dist[sI][sJ] = res[sI][sJ];
 
    priority_queue<pair<ll,pair<ll,ll>>> pq;
    pq.push({res[sI][sJ], {sI,sJ}});
 
    bool vis[n][m];
    MS(vis, 0);
 
    while (!pq.empty()) {
        auto state = pq.top();
        pq.pop();
 
        ll i = state.second.first, j = state.second.second;
 
        if (vis[i][j]) continue;
 
        vis[i][j] = true;
 
        ll a[] = {1,-1,0,0};
        ll b[] = {0,0,1,-1};
 
        for (ll ctr = 0; ctr<4; ctr++) {
            ll nI = i+a[ctr];
            ll nJ = j+b[ctr];
 
            if (nI >= 0 && nI < n && nJ >= 0 && nJ < m && mat[nI][nJ] != '*') {
                ll distBtwn = res[nI][nJ];
 
                if (dist[nI][nJ] < min(dist[i][j],distBtwn)) {
                    dist[nI][nJ] = min(dist[i][j],distBtwn);
                    pq.push({dist[nI][nJ], {nI, nJ}});
                }
            }
        }
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
 
    cin>>n>>m;
 
    ll sI,sJ,eI,eJ;
 
    sI = sJ = eI = eJ = -1;
 
    for (ll i = 0; i<n; i++) {
        for (ll j = 0; j<m; j++) {
            cin>>mat[i][j];
 
            if (mat[i][j] == 'R') {
                sI = i;
                sJ = j;
            } else if (mat[i][j] == 'Z') {
                eI = i;
                eJ = j;
            }
        }
    }
 
    for (ll i = 0; i<n; i++) {
        for (ll j = 0; j<m; j++) {
            res[i][j] = INT_MAX;
        }
    }
 
    for (ll i2 = 0; i2<n; i2++) {
        for (ll j2 = 0; j2<m; j2++) {
            if (mat[i2][j2] != 'G') continue;
 
            queue<ll> qI,qJ,qC;
 
            qI.push(i2); qJ.push(j2); qC.push(0);
 
            bool vis[n][m];
 
            MS(vis, 0);
 
            while (!qI.empty()) {
                ll i = qI.front(), j = qJ.front(), c = qC.front();
 
                qI.pop(); qJ.pop(); qC.pop();
 
                res[i][j] = min(res[i][j],c);
 
                ll a[] = {1,-1,0,0};
                ll b[] = {0,0,1,-1};
 
                for (ll ctr = 0; ctr<4; ctr++) {
                    ll nI = i+a[ctr];
                    ll nJ = j+b[ctr];
 
                    if (nI >= 0 && nI < n && nJ >= 0 && nJ < m && !vis[nI][nJ] && mat[nI][nJ] != '*') {
                        qI.push(nI);
                        qJ.push(nJ);
                        qC.push(c+1);
                        vis[nI][nJ] = true;
                    }
                }
            }
        }
    }
 
    dijkstra(sI,sJ);
 
    cout<<dist[eI][eJ]<<endl;
 
    return 0;
}