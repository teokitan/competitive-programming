#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x), (y), sizeof(x))
 
using namespace std;
 
int n,m;
 
vector<pair<int,int>> pat[101];
vector<pair<int,int>> used;
pair<int,int> blocked = {0, 0};
 
bool blocked_edge (int a,int b) {
    if (a == blocked.first && b == blocked.second) return true;
 
    swap (a,b);
 
    if (a == blocked.first && b == blocked.second) return true;
 
    return false;
}
 
int dijkstra(int start)
{
    int res = 0;
 
    vector<int> dist(n+1);
    for (int i=1; i<=n; i++) dist[i] = INT_MAX;
 
    priority_queue<pair<int, int>> pq;
    dist[start] = 0;
    pq.push({0, start});
 
    bool vis[n + 1]; int par[n+1];
    MS(vis, 0); MS(par, -1);
 
    while (!pq.empty())
    {
        pair<int, int> state = pq.top();
        pq.pop();
 
        int i = state.second;
 
        if (vis[i] == true) continue;
 
        vis[i] = true;
        res += dist[i];
 
        if (par[i] != -1) used.pb({par[i], i});
 
        for (auto edge : pat[i]) {
            int next = edge.first, rast = edge.second;
 
            if (!blocked_edge(i, next) && dist[next] > rast) {
                par[next] = i;
                dist[next] = rast;
                pq.push({-dist[next], next});
            }
        }
    }
 
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
 
    cin>>n>>m;
 
    for (int i = 1; i<=m; i++) {
        int a,b,c;
 
        cin>>a>>b>>c;
 
        pat[a].push_back({b,c});
        pat[b].push_back({a,c});
    }
 
    int start;
 
    start = 1;
 
    cout<<dijkstra(start)<<" ";
    vector<pair<int,int>> usedOrig = used;
 
    int res2 = INT_MAX;
 
    for (auto it : usedOrig) {
        used.clear();
        blocked = it;
 
        int ret = dijkstra(start);
 
        if (used.size() == n-1) res2 = min(res2, dijkstra(start));
    }
 
    cout<<res2<<endl;
 
    return 0;
}