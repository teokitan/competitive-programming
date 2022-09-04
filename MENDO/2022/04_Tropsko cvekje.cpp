#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
  
using namespace std;
  
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n,l,k;
    cin>>n>>l>>k;
  
    ll niza[n+k*2];
    for (ll i = 0; i<n+k*2; i++) niza[i] = 0;
    for (ll i = 0; i<n; i++) cin>>niza[i];
  
    ll pref[n+k*2];
    ll run = 0;
    for (ll i = 0; i<n+k*2; i++) {
        if (i < n) run += (niza[i] >= l);
  
        pref[i] = run;
    }
  
    ll res = 0;
  
    for (ll i = 0; i<n; i++) {
        ll br = pref[i+k];
        if (i != 0) br -= pref[i-1];
  
        if (br >= k+1) res++;
    }
  
    cout<<res<<endl;
}