#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
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
 
    char mat[n][m];
 
    int sI, sJ;
    int eI, eJ;
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin>>mat[i][j];
 
            if (mat[i][j] == 'S') {
                sI = i;
                sJ = j;
            } else if (mat[i][j] == 'E') {
                eI = i;
                eJ = j;
            }
        }
    }
 
    int bari[n][m];
 
    MS(bari, -1);
 
    queue<int> qI,qJ,qC;
    qI.push(sI);
    qJ.push(sJ);
    qC.push(0);
 
    bool vis[n][m];
    MS(vis, 0);
    vis[sI][sJ] = true;
 
    while (!qI.empty()) {
        int i = qI.front(), j = qJ.front(), c = qC.front();
 
        qI.pop(); qJ.pop(); qC.pop();
 
        if (mat[i][j] == 'E') {
            cout<<c<<endl;
 
            return 0;
        }
 
        int a[] = {1,-1,0,0};
        int b[] = {0,0,1,-1};
 
        for (int ctr = 0; ctr<4; ctr++) {
            int i2 = i+a[ctr];
            int j2 = j+b[ctr];
 
            if (i2 < 0 || i2 >= n || j2 < 0 || j2 >= m || vis[i2][j2]) continue;
 
            if (mat[i2][j2] == '#') bari[i2][j2] = c+1;
            else {
                qI.push(i2);
                qJ.push(j2);
                qC.push(c+1);
 
                vis[i2][j2] = true;
            }
        }
    }
 
    int res = -1;
 
    qI.push(eI);
    qJ.push(eJ);
    qC.push(0);
 
    MS(vis, 0);
    vis[eI][eJ] = true;
 
    while (!qI.empty()) {
        int i = qI.front(), j = qJ.front(), c = qC.front();
 
        qI.pop(); qJ.pop(); qC.pop();
 
        if (mat[i][j] == '#') {
            if (bari[i][j] != -1) res = max(res, c+bari[i][j]);
 
            continue;
        }
 
        int a[] = {1,-1,0,0};
        int b[] = {0,0,1,-1};
 
        for (int ctr = 0; ctr<4; ctr++) {
            int i2 = i+a[ctr];
            int j2 = j+b[ctr];
 
            if (i2 < 0 || i2 >= n || j2 < 0 || j2 >= m || vis[i2][j2]) continue;
 
            qI.push(i2);
            qJ.push(j2);
            qC.push(c+1);
 
            vis[i2][j2] = true;
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}