#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll zbir (ll n) {
    ll res = 0;
 
    while (n > 0) {
        res += n;
 
        n /= 10;
    }
 
    return res;
}
 
ll power (ll n) {
    ll res = 1;
 
    for (ll i = 1; i<=n; i++) res *= 10;
 
    return res;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll z,c;
 
    cin>>z>>c;
 
    ll a = power(c-1);
 
    ll b = power(c);
 
    //b--;
 
    ll curr = (a+b)/2;
    ll currZbir = 0;
 
    while (a < b) {
        curr = (a+b)/2;
 
        currZbir = zbir(curr);
 
        if (currZbir == z) {
            cout<<curr<<endl;
            return 0;
        }
 
        if (currZbir < z) {
            a = curr+1;
        } else if (currZbir > z) {
            b = curr;
        }
    }
 
    return 0;
}