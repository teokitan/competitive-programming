#include <bits/stdc++.h>
 
typedef long long ll;
 
#define mp make_pair
#define pb(x) push_back((x))
#define MS(x,y) memset(x, y, sizeof(x))
 
using namespace std;
 
int main()
{
  //  fstream cin("544ET_4.IN");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n,k;
 
    cin>>n>>k;
 
    ll niza[n];
 
    map <ll,ll> zad;
 
    for (ll i = 0; i<n; i++) {
        cin>>niza[i];
 
        zad[niza[i]]++;
    }
 
    ll res = 0;
 
    for (auto it = zad.begin(); it!=zad.end(); it++) {
        const ll br = it->second;
 
        if (k == 0){
            if (br <= 1) continue;
            else res += ( br*(br-1) ) / 2;
 
            continue;
        }
 
        if (zad.count(it->first + k) == 1) res += br * zad[it->first+k];
    }
 
    cout<<res<<endl;
 
    return 0;
}