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
 
    ll n,k;
 
    cin>>n>>k;
 
    ll temp = 1;
 
    for (ll i = n+1; ; i+=temp) {
        int ctr = 0;
 
        for (ll j = 1; j<=i; j*=10) {
            if ((i/j)%10 == 7) ctr++;
        }
 
        if ((i/temp)%10 == 7) temp*=10;
 
        if (ctr >= k) {
            cout<<i<<endl;
            return 0;
        }
    }
 
    return 0;
}