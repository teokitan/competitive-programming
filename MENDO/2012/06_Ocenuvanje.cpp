#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
vector <ll> niza;
 
int n;
 
ll presmetaj(int k){
    ll ret=0;
 
    ll o = niza[k];
 
    for(int i=0; i<=k; i++){
        ret += min(niza[i], o);
    }
 
    for(int i=k+1; i<n; i++) {
        ret += min(niza[i], o-1);
    }
 
    return ret;
}
 
int main() {
  //  fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll k;
 
    cin >> n >>k;
 
    for(int i = 0; i<n; i++) {
        ll a;
 
        cin >> a;
 
        niza.pb(a);
    }
 
    ll res[n+1], kraj=0;
 
    for(int i = 0; i<n; i++) {
        res[i]=presmetaj(i);
 
        if (res[i] > k) kraj++;
    }
 
    cout << kraj;
 
    return 0;
}