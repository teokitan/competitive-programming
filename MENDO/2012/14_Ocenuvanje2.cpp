#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
#define LONG_LONG_MAX 9999999999999999999
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n,k;
 
    cin>>n>>k;
 
    ll niza[n];
 
    for (ll i = 0; i<n; i++) cin>>niza[i];
 
    sort(niza, niza+n);
 
    ll maxi = niza[0]*k;
 
    ll first = 0, mid = LONG_LONG_MAX, last = niza[0]*k, res = LONG_LONG_MAX;
 
    while (first < last) {
        ll check = 0;
        mid = (first+last)/2;
 
        for (ll i = 0; i<n; i++) {
            check += mid/niza[i];
        }
 
        if (check < k) {
            first = mid+1;
        } else {
            last = mid;
            res = mid;
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}