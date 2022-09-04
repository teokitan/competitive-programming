#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000001
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    string a;
    cin>>a;
  
    ll zbir = 0;
    for (ll i = 0; i<3; i++) zbir += a[i]-'0';
  
    ll l1 = a[0]-'0';
    ll l2 = a[1]-'0';
    ll l3 = a[2]-'0';
    string b;
  
    ll n;
    cin>>n;
  
    if (n <= 3) {
        cout<<a[n-1]<<endl;
        return 0;
    }
  
    n -= a.length();
  
    ll interval = -1;
  
    for (ll i = 0; i<n; i++) {
        ll zbir = (l1+l2+l3)%10;
        l1 = l2;
        l2 = l3;
        l3 = zbir;
  
        b = "";
        b += (l1+'0');
        b += (l2+'0');
        b += (l3+'0');
  
        if (b == a && n > 100000) {
            interval = i+1;
            i += interval*(n/interval-1);
        }
    }
  
    cout<<l3<<endl;
}