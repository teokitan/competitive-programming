#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int kockiCtr[100000];
 
int main()
{
 //   fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(kockiCtr, 0);
 
    int n,m;
 
    cin>>n>>m;
 
    int r,k;
 
    cin>>r>>k;
 
    r--; k--;
 
    bool vis[n][m];
 
    MS(vis, false);
 
    queue <int> qi, qj, qc;
 
    qi.push(r);
    qj.push(k);
    qc.push(0);
 
    vis[r][k] = true;
 
    while (!qi.empty()) {
        int i = qi.front(), j = qj.front(), res = qc.front();
        qi.pop(); qj.pop(); qc.pop();
 
        if (vis[0][0] && vis[n-1][0] && vis[0][m-1] && vis[n-1][m-1]) {
            cout<<res+1<<endl<<kockiCtr[res];
            return 0;
        }
 
        int ctr = 0;
 
        if(i-1 >= 0 && vis[i-1][j] == false){
            vis[i-1][j] = true;
            qi.push(i-1);
            qj.push(j);
            qc.push(res + 1);
            ctr++;
        }
 
        if(j+1 < m && vis[i][j+1] == false){
            vis[i][j+1] = true;
            qi.push(i);
            qj.push(j+1);
            qc.push(res + 1);
            ctr++;
        }
 
        if(i+1 < n && vis[i+1][j] == false){
            vis[i+1][j] = true;
            qi.push(i+1);
            qj.push(j);
            qc.push(res + 1);
            ctr++;
        }
 
        if(j-1 >= 0 && vis[i][j-1] == false){
            vis[i][j-1] = true;
            qi.push(i);
            qj.push(j-1);
            qc.push(res + 1);
            ctr++;
        }
 
        kockiCtr[res] += ctr;
 
        res++;
    }
 
    return 0;
}