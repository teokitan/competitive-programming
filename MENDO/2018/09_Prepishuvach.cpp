#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll power(ll a,ll b) {
    ll res = 1;
 
    for (ll i = 0; i<b; i++) res *= a;
 
    return res;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n,m,k,x;
 
    cin>>n>>m>>k>>x;
 
    string str;
 
    cin>>str;
 
    ll br[m+100];
    MS(br, 0);
 
    string moz[m+1];
 
    for (ll i = 0; i<m; i++) {
        cin>>moz[i];
 
        sort(moz[i].begin(), moz[i].end());
    }
 
    ll ctr = 0;
 
    while (ctr < m) {
        ll temp = 1;
 
        if (power(k, (m-ctr)-1) > 0) temp = ceil(x/power(k, (m-ctr)-1));
        else temp = 0;
 
        if (ctr == m) break;
       // if (temp == 1) temp = 0;
 
        br[ctr] = temp;
 
        x-=temp*(power(k, (m-ctr)-1));
 
        if (x < 0) break;
 
        ctr++;
    }
 
    br[m-1]--;
 
    ctr = 0;
 
    for (ll i = 0; i<n; i++) {
        if (str[i] != '#') continue;
 
        str[i] = moz[ctr][br[ctr]];
 
        ctr++;
    }
 
    cout<<str<<endl;
 
    return 0;
}