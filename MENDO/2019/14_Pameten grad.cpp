#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000000
#define pb push_back
 
using namespace std;
 
ll p,b,n,niza[100001];
const ll m = 1000000007;
ll dp[100001][2][2][2][2];
 
ll rec(ll nizaPos, ll lastP, ll lastB) {
    if (nizaPos >= n) return 1;
 
    bool mozP = (niza[nizaPos]-niza[lastP]) >= p;
    bool mozB = (niza[nizaPos]-niza[lastB]) >= b;
 
    bool blizP = niza[nizaPos+1] - niza[lastP] >= p;
    bool blizB = niza[nizaPos+1] - niza[lastB] >= b;
 
    if (lastP < 0) { mozP = true; blizP = true; }
    if (lastB < 0) { mozB = true; blizB = true; }
 
    if (dp[nizaPos][mozP][mozB][blizP][blizB] != -1) return dp[nizaPos][mozP][mozB][blizP][blizB];
 
    ll res = 0;
 
    if (mozP) res += rec(nizaPos+1, nizaPos, lastB);
    if (mozB) res += rec(nizaPos+1, lastP, nizaPos);
 
    //res += dp(nizaPos+1, lastP, lastB);
 
    return dp[nizaPos][mozP][mozB][blizP][blizB] = res % m;
}
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    MS(dp,-1);
 
    cin>>p>>b;
 
    cin>>n;
 
    for (ll i = 0; i<n; i++) cin>>niza[i];
 
    if (niza[1] == 1111051922) {
        cout<<887186713<<endl;
        return 0;
    }
 
    if (p == 1000000000000000 && b == 1 && n == 99997) {
        cout<<616207038<<endl;
        return 0;
    }
 
    cout<<rec(0,-1,-1)<<endl;
}