#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int niza[51][3];
bool mat[51][51];
int res = -1,n;
 
bool vis[51];
 
void dfs (int i, int minu, int pr) {
    if (pr <= 1440) res = max(res, minu);
    else return;
 
    vis[i] = true;
 
    for (int ctr = 0; ctr<n; ctr++) {
        if (mat[i][ctr] && !vis[ctr]) {
            vis[ctr] = true;
 
            int razmak;
 
            razmak = niza[ctr][0] - niza[i][1];
 
            if (razmak < 0) razmak += 1440;
 
            dfs(ctr, minu+niza[ctr][2], pr+niza[ctr][2] + razmak);
 
            vis[ctr] = false;
        }
    }
}
 
bool preklop (int s1, int e1, int t) {
    if (s1 < e1) {
        if (t > s1 && t < e1) {
            return true;
        }
    } else {
        if (t > s1 || t < e1) return true;
    }
 
    return false;
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
 
    MS(mat, 0);
 
    for (int i = 0; i<n; i++) {
        int a,b,c,d;
 
        cin>>a>>b>>c>>d;
 
        niza[i][0] = a*60 + b;
        niza[i][1] = c*60 + d;
 
        if (niza[i][0] < niza[i][1]) {
            niza[i][2] = niza[i][1] - niza[i][0];
        } else if (niza[i][0] >= niza[i][1]){
            niza[i][2] = 1440 + (niza[i][1] - niza[i][0]);
        }
    }
 
    if (n == 1) {
        cout<<niza[0][2]<<endl;
        return 0;
    }
 
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (!preklop(niza[i][0], niza[i][1], niza[j][0]) && !preklop(niza[i][0], niza[i][1], niza[j][1])) {
                mat[i][j] = true;
                mat[j][i] = true;
            }
        }
    }
 
    for (int i = 0; i<n; i++) {
        MS(vis, 0);
 
        dfs(i, niza[i][2], niza[i][2]);
    }
 
    cout<<res<<endl;
 
    return 0;
}