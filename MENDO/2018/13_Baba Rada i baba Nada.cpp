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
 
    ll niza[n];
 
    ll maxi = 0;
    ll zbir = 0;
 
    for (ll i = 0; i<n; i++) {
        cin>>niza[i];
 
        maxi = max(maxi, niza[i]);
        zbir += niza[i];
    }
 
    ll zbir2 = zbir-maxi;
 
    if (maxi - zbir2 < 0) cout<<zbir<<endl;
    else cout<<zbir+(maxi-zbir2)<<endl;
 
    return 0;
}