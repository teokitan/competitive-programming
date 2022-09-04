#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000
  
using namespace std;
  
ll a[100005];
ll org[100005];
ll res = 0;
  
void mergeSort(ll prv, ll vtor) {
    ll mid = (prv+vtor+1)/2;
  
    if (vtor-prv <= 1) return;
  
    mergeSort(prv, mid);
    mergeSort(mid, vtor);
  
    ll j = 0,k;
  
    for (ll i = prv; i<mid; i++) {
        a[j] = org[i];
        j++;
    }
  
    a[j] = INT_MAX;
    j++;
  
    for (ll i = mid; i<vtor; i++) {
        a[j] = org[i];
        j++;
    }
  
    a[j] = INT_MAX;
    j++;
  
    ll prvGol = mid-prv;
    k = prvGol+1;
    j = 0;
  
    for (ll i = prv; i<vtor; i++) {
        if (a[j] > a[k]) {
            org[i] = a[k];
            res += prvGol-j;
            k++;
        } else {
            org[i] = a[j];
            j++;
        }
    }
}
  
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n;
    cin>>n;
  
    for (ll i = 0; i<n; i++) cin>>org[i];
  
    mergeSort(0, n);
  
    cout<<res<<endl;
}