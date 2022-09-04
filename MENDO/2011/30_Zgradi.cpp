#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
    cin>>n;
 
    ll niza[n];
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    ll maxi = 0;
    for (int i = 0; i<n; i++) maxi = max(maxi,niza[i]);
 
    ll res = 0;
    for (int i = 0; i<n; i++) res += maxi-niza[i];
 
    cout<<res<<endl;
}