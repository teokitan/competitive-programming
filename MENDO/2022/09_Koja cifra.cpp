#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000001
  
using namespace std;
  
string broj;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll kolku[10];
    MS(kolku,0);
  
    ll n,m;
    cin>>n>>m;
  
    for (ll i = 0; i<n; i++) {
        char a;
        cin>>a;
  
        kolku[a-'0']++;
    }
  
    for (ll i = 0; i<m; i++) {
        ll a;
        cin>>a;
  
        ll zbir = 0;
  
        for (ll j = 9; j>=0; j--) {
            zbir += kolku[j];
  
            if (zbir >= a) {
                cout<<j<<" ";
                break;
            }
        }
    }
}