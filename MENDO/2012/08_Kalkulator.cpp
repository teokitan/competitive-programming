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
 
    string raboti;
 
    cin>>raboti;
 
    bool check[10];
    int dp[5001];
 
    MS(check, 0);
    MS(dp, -1);
 
    for (int i=0; i<raboti.length(); i++) check[((int)(raboti[i]-'0'))] = true;
 
    for (int i = 0; i<10; i++) if (check[i]) dp[i] = 1;
 
    for (int i = 1; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (check[i] && check[j]) dp[10*i + j] = 2;
        }
    }
 
    for (int i = 1; i<10; i++) {
        for (int j = 0; j<10; j++) {
            for (int k = 0; k<10; k++) {
                if (check[i] && check[j] && check[k]) dp[100*i + 10*j + k] = 3;
            }
        }
    }
 
    for (int i = 1; i<10; i++) {
        for (int j = 0; j<10; j++) {
            for (int k = 0; k<10; k++) {
                for (int m = 0; m<10; m++) {
                    if (check[i] && check[j] && check[k] && check[m] && (1000*i + 100*j + 10*k + m) < 5001) dp[1000*i + 100*j + 10*k + m] = 4;
                }
            }
        }
    }
 
    for (int i = 0; i<=5000; i++) {
        for (int j = 0; j<=5000; j++) {
            if (dp[i] >= 0 && dp[j] >= 0) {
                int pos = min(i*j, 5000);
 
                if (dp[pos] < 0 || dp[pos] > dp[i] + dp[j] + 1) dp[pos] = dp[i] + dp[j] + 1;
            }
        }
    }
 
    for (int i = 0; i<=5000; i++) {
        for (int j = 0; j<=5000; j++) {
            if (dp[i] >= 0 && dp[j] >= 0) {
                  int pos = min(i+j, 5000);
 
                  if (dp[pos] < 0 || dp[pos] > dp[i] + dp[j] + 1) dp[pos] = dp[i] + dp[j] + 1;
            }
        }
    }
 
    int t;
 
    cin>>t;
 
    cout<<dp[t]<<endl;
 
    return 0;
}