#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
 
using namespace std;
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
 
    cin>>n;
 
    string niza[n];
 
    for (ll i = 0; i<n; i++) cin>>niza[i];
 
    vector<ll> levi,desni;
 
    for (ll i = 0; i<n; i++) {
        if (niza[i] == "LL") levi.pb(i);
        else if (niza[i] == "DD") desni.pb(i);
    }
 
    ll res = 0;
 
    for (ll i = 0; i<desni.size(); i++) res += abs(desni[i]-levi[i]);
 
    cout<<res<<endl;
}