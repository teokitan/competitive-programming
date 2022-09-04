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
 
    for (ll i = 0; i<n; i++) cin>>niza[i];
 
    sort(niza, niza+n);
    reverse(niza, niza+n);
 
    ll res = 0;
 
    for (ll i = 0; i<n; i++) {
        for (ll j = 0; j<n; j++) {
            if (niza[i] == -1 || niza[j] == -1 || i == j) continue;
 
            ll temp = (niza[i]*niza[i]) + (niza[j]*niza[j]);
 
            double temp2 = sqrt(temp);
 
            if (ll(temp2) - temp2 == 0 && __gcd(niza[i], niza[j]) == 1) {
                res+=2;
                niza[i] = -1;
                niza[j] = -1;
                break;
            }
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}