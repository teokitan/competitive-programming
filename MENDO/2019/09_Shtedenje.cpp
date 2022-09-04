#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000000
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll k,a,b;
  
    cin>>k>>a>>b;
  
    if (b <= a) {
        cout<<"NE"<<endl;
        return 0;
    }
  
    ll prv = k, vtor = 0;
  
    for (ll res = 1; res<=1000000; res++) {
        prv += a;
        vtor += b;
  
        if (prv == vtor) {
            cout<<res<<endl;
            return 0;
        }
    }
  
    cout<<"NE"<<endl;
}