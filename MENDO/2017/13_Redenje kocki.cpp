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
 
    int p[n],k[n],r[n];
 
    for (int i = 0; i<n; i++) cin>>p[i];
 
    for (int i = 0; i<n; i++) cin>>k[i];
 
    for (int i = 0; i<n; i++) r[i] = k[i] - p[i];
 
    int res = 0;
 
    for (int i = 1; i<n; i++) {
        if (r[i] == r[i-1]) continue;
 
        if (r[i] < 0 && r[i-1] < 0) {
            if (r[i] < r[i-1]) {
                res += r[i-1] - r[i];
            }
 
            continue;
        } else if (r[i] >= 0 && r[i-1] >= 0) {
            if (r[i] > r[i-1]) {
                res += r[i] - r[i-1];
            }
 
            continue;
        }
 
        res += abs(r[i]);
    }
 
    if (r[0] != 0) res += abs(r[0]);
 
    cout<<res<<endl;
 
    return 0;
}