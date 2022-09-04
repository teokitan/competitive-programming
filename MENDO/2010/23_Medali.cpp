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
 
    int n;
 
    cin>>n;
 
    int niza[n];
 
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    vector<int> d(n+1, 1000000000);
 
    for (int i = 0; i<n; i++) {
        *lower_bound(d.begin(), d.end(), niza[i]) = niza[i]-1;
    }
 
    int res1 = 0;
 
    for (int i = 0; i<=n; i++) {
        if (d[i] == 1000000000) {
            res1 = i;
            break;
        }
    }
 
    reverse(niza, niza+n);
 
    int res2 = 0;
 
    vector<int> d2(n+1, 1000000000);
 
    for (int i = 0; i<n; i++) {
        *lower_bound(d2.begin(), d2.end(), niza[i]) = niza[i]-1;
    }
 
    for (int i = 0; i<=n; i++) {
        if (d2[i] == 1000000000) {
            res2 = i;
            break;
        }
    }
 
    cout<<min(n-res1, n-res2);
 
    return 0;
}