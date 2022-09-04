#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main() {
 //   fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int m,n;
 
    cin>>m>>n;
 
    char mat[m][n];
 
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>>mat[i][j];
        }
    }
 
    int res1,res2;
    res1=res2=0;
 
    bool vis[m][n];
    MS(vis,false);
 
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            if (mat[i][j] == '#' || vis[i][j]) continue;
 
            vis[i][j] = true;
 
            int ovci,volci;
            ovci=volci=0;
 
            queue<int> qi,qj;
            qi.push(i);
            qj.push(j);
 
            while (!qi.empty()) {
                int i2 = qi.front(),j2 = qj.front();
 
                qi.pop(); qj.pop();
 
                if (mat[i2][j2] == 'o') ovci++;
 
                if (mat[i2][j2] == 'v') volci++;
 
                int goreDole[] = {1, -1, 0, 0};
                int levoDesno[] = {0, 0, 1, -1};
 
                for (int lm1 = 0; lm1<4; lm1++) {
                    int iKop = i2 + goreDole[lm1];
                    int jKop = j2 + levoDesno[lm1];
 
                    if (mat[iKop][jKop] && mat[iKop][jKop] != '#' && !vis[iKop][jKop]) {
                        vis[iKop][jKop] = true;
                        qi.push(iKop);
                        qj.push(jKop);
                    }
                }
            }
 
            if (ovci > volci) res1 += ovci;
            else res2 += volci;
        }
    }
 
    cout<<res1<<" "<<res2<<endl;
 
    return 0;
}