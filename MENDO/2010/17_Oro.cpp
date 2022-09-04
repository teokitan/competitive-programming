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
 
    int p,m;
 
    cin>>p>>m;
 
    int n;
 
    cin>>n;
 
    int niza[n];
 
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    bool dp[1001][1001];
 
    MS(dp, 0);
 
    dp[0][p] = 1;
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<=m; j++) {
            if (!dp[i][j]) continue;
 
            if (j - niza[i] >= 0) dp[i+1][j-niza[i]] = 1;
            if (j + niza[i] <= m) dp[i+1][j+niza[i]] = 1;
        }
    }
 
    for (int i = m; i>=0; i--) {
        if (dp[n][i]) {
            cout<<i<<endl;
            return 0;
        }
    }
 
    cout<<-1<<endl;
 
    return 0;
}