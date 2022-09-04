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
 
    ll n;
 
    cin>>n;
 
    string niza[n];
 
    for (ll i = 0; i<n; i++) cin>>niza[i];
 
    ll dp[n+1];
 
    dp[0] = 1;
 
    for (ll i = 1; i<=n; i++) {
        dp[i] = 0;
 
        for (ll j = 1; j<=i; j++) {
            bool check = true;
 
            ll p = i-j+1, k = i;
 
            for (ll m = p; m<=k; m++) {
                if (niza[m-1] != "N" && (ll)atoi(niza[m-1].c_str()) != j) check = false;
            }
 
            if (check) dp[i] += dp[i-j];
        }
    }
 
    if (dp[n] == 1) cout<<"DA"<<endl;
    else cout<<"NE"<<endl;
 
    return 0;
}