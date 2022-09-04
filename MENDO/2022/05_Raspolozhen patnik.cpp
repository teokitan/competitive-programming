#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
const int maxi = 1000001;
int n,m,k;
vector<int> pat[100001];
int tezina[100001];
 
int bfs (int s, int mini) {
    queue<int> qI, qC;
    qI.push(s); qC.push(1);
 
    bool vis[maxi];
    MS(vis,0);
    vis[s] = true;
 
    while (!qI.empty()) {
        int i = qI.front(), c = qC.front();
        qI.pop(); qC.pop();
 
        if (i == n-1) return c;
 
        for (auto it:pat[i]) {
            if (vis[it]) continue;
            if (tezina[it] < mini) continue;
 
            vis[it] = true;
            qI.push(it);
            qC.push(c+1);
        }
    }
 
    return -1;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>n>>m>>k;
 
    for (int i = 0; i<n; i++) cin>>tezina[i];
 
    for (int i = 0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        a--; b--;
 
        pat[a].pb(b);
        pat[b].pb(a);
    }
 
    int left = 1, right = maxi, lastA = 1, lastDist = k;
 
    while (left < right) {
        int mid = (left+right)/2;
 
        int res = bfs(0,mid);
 
        if (res == -1 || res > k || tezina[0] < mid) right = mid;
        else {
            lastA = mid;
            lastDist = res;
            left = mid+1;
        }
    }
 
    cout<<lastA<<" "<<lastDist<<endl;
}