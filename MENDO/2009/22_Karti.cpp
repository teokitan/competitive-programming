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
 
    int n,k;
 
    cin>>n>>k;
 
    int niza[n];
 
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    int resF = 0;
 
    if (true) {
        int dp[n];
 
        MS(dp, 0);
 
        int zbir = 0, res = 0;
 
        bool check = false;
 
        for (int i = 0; i<n; i++) {
            dp[i] = (niza[i]+zbir) % 2 == 0;
 
            if (i >= k-1) zbir += dp[i]-dp[i-k+1];
            else zbir += dp[i];
 
            res += dp[i];
 
            if (i>n-k && dp[i] != 0) check = true;
        }
 
        if (check) resF = INT_MAX;
        else resF = res;
    }
 
    if (true) {
        int dp[n];
 
        MS(dp, 0);
 
        int zbir = 0, res = 0;
 
        bool check = false;
 
        for (int i = 0; i<n; i++) {
            dp[i] = (niza[i]+zbir) % 2 == 1;
 
            if (i >= k-1) zbir += dp[i]-dp[i-k+1];
            else zbir += dp[i];
 
            res += dp[i];
 
            if (i>n-k && dp[i] != 0) check = true;
        }
 
        if (check) resF = min(resF, INT_MAX);
        else resF = min(resF, res);
    }
 
    if (resF == INT_MAX) cout<<-1<<endl;
    else cout<<resF<<endl;
 
    return 0;
}