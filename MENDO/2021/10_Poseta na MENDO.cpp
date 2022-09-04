#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int k,n;
    cin>>k>>n;
 
    vector<int> c1(n),c2(n);
 
    for (int i = 0; i<n; i++) cin>>c1[i];
    for (int i = 0; i<n; i++) cin>>c2[i];
 
    sort(c1.begin(), c1.end());
    sort(c2.begin(), c2.end());
 
    ll res = 0;
 
    for (int i = 0; i<n; i++) {
        int a = c1[i];
 
        int b = max(k-a,0);
 
        auto res2 = (lower_bound(c2.begin(),c2.end(),b))-c2.begin();
 
        res += n-res2;
    }
 
    cout<<res<<endl;
}