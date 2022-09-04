#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000000
  
using namespace std;
  
vector<pair<int, pair<int,int>>> pat[1001];
  
vector<int> dijkstra(int s, int trbLi) {
    vector<int> dist(1001, MN);
    dist[s] = 0;
  
    priority_queue<pair<int,int>> pq;
    pq.push({0, s});
  
    bool vis[1001];
    MS(vis, 0);
  
    while (!pq.empty()) {
        int i = pq.top().second;
        pq.pop();
  
        if (vis[i]) continue;
        vis[i] = true;
  
        for (auto edge:pat[i]) {
            int next = edge.first, distBtwn = edge.second.first, sneg = edge.second.second;
  
            if (trbLi && sneg == 0) continue;
  
            if (dist[next] > dist[i] + distBtwn) {
                dist[next] = dist[i] + distBtwn;
                pq.push({-dist[next], next});
            }
        }
    }
  
    return dist;
}
  
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n,m;
    cin>>n>>m;
  
    for (int i = 0; i<m; i++) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
  
        pat[a].pb({b,{c,d}});
        pat[b].pb({a,{c,d}});
    }
  
    int dolz = dijkstra(1,0)[n];
    int dolz2 = dijkstra(1,1)[n];
  
    cout<<dolz<<endl;
  
    if (dolz2 <= dolz) cout<<"DA"<<endl;
    else cout<<"NE"<<endl;
}