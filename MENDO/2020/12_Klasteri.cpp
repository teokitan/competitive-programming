#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MN 1000000000
#define pb push_back
#define MS(x,y) memset((x), (y), sizeof((x)))
  
using namespace std;
  
vector<int> komp[100001];
vector<int> pat[100001];
map<int,int> kompPri;
bitset<100001> empti;
int rez[100001];
  
int main()
{
    #ifdef LOCAL_DEBUG_T
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    MS(rez, 0);
  
    int n,m,z;
  
    cin>>n>>m;
  
    for (int i = 0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        a--; b--;
  
        pat[a].pb(b);
        pat[b].pb(a);
  
        rez[a]--;
        rez[b]--;
    }
  
    int ctrKomp = 0;
    bool vis[n];
    MS(vis, 0);
  
    for (int i = 0; i<n; i++) {
        if (vis[i]) continue;
  
        vis[i] = true;
  
        queue<int> qI;
        qI.push(i);
        komp[ctrKomp].pb(i);
        kompPri[i] = ctrKomp;
  
        while (!qI.empty()) {
            int i2 = qI.front();
  
            qI.pop();
  
            for (auto it:pat[i2]) {
                if (vis[it]) continue;
  
                komp[ctrKomp].pb(it);
                kompPri[it] = ctrKomp;
                vis[it] = true;
  
                qI.push(it);
            }
        }
  
        ctrKomp++;
    }
  
    for (int i = 0; i<ctrKomp; i++) sort(komp[i].begin(), komp[i].end());
  
    cin>>z;
  
    for (int i = 0; i<z; i++) {
        int a,b;
        cin>>a>>b;
        a--; b--;
  
        if (kompPri[a] == kompPri[b]) {
            rez[a]--;
            rez[b]--;
        }
    }
  
    for (int i = 0; i<n; i++) cout<<rez[i]+komp[kompPri[i]].size()-1<<endl;
}