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
 
    int res = 0;
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            for (int m = 0; m<n; m++) {
                for (int k = 0; k<n; k++) {
                    if (i >= j || i >= m || i >= k || j >= m || j >= k || m >= k) continue;
 
                    if (niza[i]*niza[m] == niza[j]*niza[k]) res++;
                }
            }
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}