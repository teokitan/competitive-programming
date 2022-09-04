#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000001
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,m;
 
    cin>>n>>m;
 
    int w;
 
    cin>>w;
 
    char mat[n][m];
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin>>mat[i][j];
        }
    }
 
    int mat2[n][m];
 
    MS(mat2, 0);
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (mat[i][j] != 'C') continue;
 
            bool vis[n][m];
 
            MS(vis, 0);
 
            queue<int> qI, qJ, qC;
 
            qI.push(i); qJ.push(j); qC.push(0);
 
            while (!qI.empty()) {
                int iC = qI.front(), jC = qJ.front(), cC = qC.front();
 
                qI.pop(); qJ.pop(); qC.pop();
 
                if (cC > w) continue;
 
                if (vis[iC][jC]) continue;
 
                vis[iC][jC] = true;
 
                mat2[iC][jC]++;
 
                int a[] = {1,-1,0,0};
                int b[] = {0,0,1,-1};
 
                for (int ctrr = 0; ctrr<4; ctrr++) {
                    int i2 = iC+a[ctrr];
                    int j2 = jC+b[ctrr];
 
                    if (i2 < 0 || i2 >= n || j2 < 0 || j2 >= m) continue;
                    if (mat[i2][j2] == '#') continue;
 
                    qI.push(i2);
                    qJ.push(j2);
                    qC.push(cC+1);
                }
            }
        }
    }
 
    int resCtr, resI, resJ;
 
    resCtr = resI = resJ = -1;
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (mat[i][j] == 'C' || mat[i][j] == '#') mat2[i][j] = 0;
 
            if (mat2[i][j] > resCtr) {
                resCtr = mat2[i][j];
                resI = i;
                resJ = j;
            }
        }
 
    }
 
    cout<<resI+1<<" "<<resJ+1<<endl;
 
    return 0;
}