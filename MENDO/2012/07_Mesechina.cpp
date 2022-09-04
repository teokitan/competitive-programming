#include <bits/stdc++.h>
 
#define pb(x) push_back((x))
#define MS(x,y) memset((x), (y), sizeof(x))
#define ll long long
 
using namespace std;
 
int n;
 
vector<pair<double,double>> pat[5001];
 
vector<double> dijkstra(double start) {
    vector <double> dist(5000);
    for (int i = 0; i<n; i++) dist[i] = 10001.0;
    dist[start] = 0.0;
 
    priority_queue<pair<double,double>> pq;
    pq.push({0.0, start});
 
    bool vis[n];
    MS(vis, 0);
 
    int ctr = 0;
 
    while (!pq.empty()) {
        pair<double, double> state = pq.top();
        pq.pop();
 
        int i = (int)state.second;
 
        if (vis[i]) continue;
 
        vis[i] = true;
 
        for (auto edge : pat[i]) {
            double next = edge.first, distBtwn = edge.second;
 
            if (distBtwn < 0) continue;
 
            if (dist[(int)next] > dist[i] + distBtwn) {
                dist[(int)next] = dist[i] + distBtwn;
                pq.push({-dist[(int)next], next});
            }
        }
    }
 
    return dist;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>n;
 
    int koord[n][2];
 
    for (int i = 0; i<n; i++) {
        cin>>koord[i][0]>>koord[i][1];
    }
 
    for (int i = 0; i<n; i++) {
        int x1 = koord[i][0], y1 = koord[i][1];
 
        for (int j = 0; j<n; j++) {
            int x2 = koord[j][0], y2 = koord[j][1];
 
            double dist = sqrt( pow(x2 - x1,2) + (pow(y2 - y1, 2)));
 
            if (fabs(dist) > 10) continue;
 
            pat[i].push_back({j, dist});
            pat[j].push_back({i, dist});
        }
    }
 
    vector<double>dist = dijkstra(0);
 
    cout<<dist[n-1]<<endl;
 
    return 0;
}