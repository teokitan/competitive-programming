#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
 
using namespace std;
 
int P[300001][19];
int level[300001];
int parent[300001];
int point[300001];
 
int LCA(int u, int v){
    if (level[u] < level[v]) swap(u,v);
 
    int dist = level[u]-level[v];
 
    while( dist > 0) {
        int raiseBy = log2(dist);
        u = P[u][raiseBy];
        dist -= (1<<raiseBy) ;
    }
 
    if(u == v) return u;
 
    for(int j = 18; j>=0; j--) {
        if((P[u][j] != -1) && (P[u][j] != P[v][j])){
            u = P[u][j];
            v = P[v][j];
        }
    }
 
    return parent[u];
}
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(P,-1);
    MS(level, -1);
    MS(point, -1);
 
    level[0] = 0;
    point[0] = 0;
 
    int n;
 
    cin>>n;
 
    for (int i = 1; i<=n; i++) {
        char c;
 
        cin>>c;
 
        if (c == 'a') {
            int koj;
 
            cin>>koj;
 
            koj = point[koj];
            point[i] = i;
            parent[i] = koj;
            level[i] = level[koj]+1;
 
            P[i][0] = parent[i];
 
            for (int j = 1; (1<<j)<n; j++) {
                if (P[i][j-1] != -1) P[i][j] = P[P[i][j-1]][j-1];
            }
        } else if (c == 'b') {
            int koj;
            cin>>koj;
 
            cout<<point[koj]<<endl;
 
            koj = point[parent[point[koj]]];
            point[i] = koj;
        } else {
            int koj, vtor;
            cin>>koj>>vtor;
 
            koj = point[koj];
            vtor = point[vtor];
            point[i] = koj;
 
            cout<<level[point[LCA(koj, vtor)]]<<endl;
        }
    }
}