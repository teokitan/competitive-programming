#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
vector<pair<int,int>> pat[60001];
vector<int> niza;
int dist[16][16];
 
vector<int> dijkstra(int start) {
    vector <int> dist(60001);
    for (int i = 0; i<60001; i++) dist[i] = INT_MAX;
    dist[start] = 0;
 
    priority_queue<pair<int,int>> pq;
    pq.push({0, start});
 
    bool vis[60001];
    MS(vis, 0);
 
    while (!pq.empty()) {
        auto state = pq.top();
        pq.pop();
 
        int i = state.second;
 
        if (vis[i]) continue;
 
        vis[i] = true;
 
        for (auto edge : pat[i]) {
            int next = edge.first, distBtwn = edge.second;
            if (dist[next] > dist[i] + distBtwn) {
                dist[next] = dist[i] + distBtwn;
                pq.push({-dist[next], next});
            }
        }
    }
 
    return dist;
}
 
int dp[20][200000];
int k;
 
int tsp (int i, int mask) {
    if (dp[i][mask] != -1) return dp[i][mask];
    if (mask == (1<<k)-1) return dp[i][mask] = dist[i][0];
 
    int best = INT_MAX;
 
    for (int j = 0; j<k; j++) {
        if (!((1<<j) & mask)) {
            int mask2 = mask | (1<<j);
            best = min(best, tsp(j, mask2)+dist[i][j]);
        }
    }
 
    return dp[i][mask] = best;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(dp, -1);
 
    int n,r;
 
    cin>>n>>k>>r;
 
    bool check = true;
 
    for (int i = 0; i<k; i++) {
        int a;
 
        cin>>a;
 
        niza.pb(a);
 
        if (a == 0) check = false;
    }
 
    if (check) { niza.pb(0); k++; }
 
    sort(niza.begin(), niza.end());
 
    for (int i = 0; i<r; i++) {
        int a,b,c;
 
        cin>>a>>b>>c;
 
        pat[a].pb({b,c});
        pat[b].pb({a,c});
    }
 
    for (int i = 0; i<k; i++) {
        int s = niza[i];
 
        auto dist2 = dijkstra(s);
 
        for (int j = 0; j<k; j++) {
            dist[i][j] = dist2[niza[j]];
        }
    }
 
    cout<<tsp(0, 1)<<endl;
 
    return 0;
}