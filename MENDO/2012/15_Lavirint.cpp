#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll dp[1000][1000][4];
char mat[1000][1000];
 
bool check(int t,int i, int j,int ri, int rj,int c)
{
    for(int k = 1; k<=t; k++)
    {
        int ni = i+ri*k, nj = j+rj*k;
 
        if (!mat[ni][nj] || (mat[ni][nj] && mat[ni][nj] == '#')) return false;
    }
 
    return true;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n,m,res = INT_MAX;
 
    cin>>n>>m;
 
    ll pocI,pocJ,krajI,krajJ;
 
    //char mat[n+5][m+5];
 
    for (ll i = 0; i<n; i++) {
        for (ll j = 0; j<m; j++) {
            cin>>mat[i][j];
 
            if (mat[i][j] == 'P') { pocI = i; pocJ = j; }
            if (mat[i][j] == 'K') { krajI = i; krajJ = j; }
        }
    }
 
    MS(dp, -1);
 
    queue<ll> qi,qj,qc,qt;
 
    qi.push(pocI); qj.push(pocJ); qc.push(0); qt.push(1);
 
    dp[pocI][pocJ][1] = 0;
 
    int di[4] = {1, -1, 0, 0};
    int dj[4] = {0, 0, 1, -1};
 
    while (!qi.empty()) {
        int i = qi.front(), j = qj.front(), c = qc.front(), t = qt.front();
        qi.pop(); qj.pop(); qc.pop(); qt.pop();
 
        for(int k = 0; k<4; k++) {
            int ni = i+di[k]*t, nj = j+dj[k]*t;
 
            if (check(t, i, j, di[k], dj[k], c)) {
                if(dp[ni][nj][t] == -1 || c+1 < dp[ni][nj][t]) {
                    dp[ni][nj][t]=c+1;
                    qi.push(ni);
                    qj.push(nj);
                    qc.push(c+1);
                    qt.push(t%3+1);
                }
            }
        }
    }
 
    for (ll i = 1; i<4; i++) {
        if (dp[krajI][krajJ][i] != -1) res = min(res,dp[krajI][krajJ][i]);
    }
 
    cout<<res<<endl;
 
    return 0;
}