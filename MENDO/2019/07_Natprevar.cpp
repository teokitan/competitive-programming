#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000
 
using namespace std;
 
int dp[101];
 
int calc (int br) {
    if (br < 0) return 0;
    if (br == 0) return 1;
    if (dp[br] != -1) return dp[br];
 
    return dp[br] = calc(br-4)+calc(br-7);
}
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(dp, -1);
 
    int n;
    cin>>n;
 
    if (calc(n) > 0) cout<<"DA"<<endl;
    else cout<<"NE"<<endl;
}