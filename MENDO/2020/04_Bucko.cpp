#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000
  
using namespace std;
  
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n;
    cin>>n;
  
    ll niza[n];
    for (ll i = 0; i<n; i++) cin>>niza[i];
  
    map<ll,ll> jes;
    ll zbir = 0;
    ll res = 0;
    jes[0] = 1;
  
    for (ll i = 0; i<n; i++) {
        zbir += niza[i];
  
        if (jes.count(zbir)) res += jes[zbir];
        else jes[zbir] = 0;
  
        jes[zbir]++;
    }
  
    cout<<res<<endl;
}