#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x),(y), sizeof((x)))
#define MN 1000000001
#define pb push_back
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif // LOCAL_DEBUG
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll k;
    cin>>k;
  
    set<ll> site;
  
    ll najmalo = MN; najmalo *= 10;
  
    for (ll i = 0; i<k; i++) {
        ll a,b;
        cin>>a;
  
        if (a == 1) {
            cin>>b;
            site.insert(b);
  
            auto res1 = site.find(b);
            res1++;
            auto res2 = res1;
            res2--;
  
            bool check = false;
  
            if (res2 == site.begin()) check = true;
            if (!check) res2--;
  
            if (res1 != site.end()) najmalo = min(najmalo,(*res1)-b);
            if (!check) najmalo = min(najmalo,b-(*res2));
        } else {
            cout<<najmalo<<" ";
        }
    }
}