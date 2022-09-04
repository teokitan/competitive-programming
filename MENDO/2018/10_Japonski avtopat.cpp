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
 
    ll n,m;
 
    cin>>n>>m;
 
    pair<ll,ll> niza[n];
 
    for (ll i = 0; i<n; i++) cin>>niza[i].first>>niza[i].second;
 
    sort(niza, niza+n);
 
    ll res = niza[0].second;
 
    for (ll i = 0; i<n-1; i++) {
        ll br = niza[i+1].second-niza[i].second;
 
        if (br >= 0) res += br;
    }
 
    cout<<res<<endl;
 
    return 0;
}