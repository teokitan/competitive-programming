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
 
    int niza[n], zbir = 0;
 
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
 
        zbir+=niza[i];
    }
 
    sort(niza, niza+n);
 
    int res = -1;
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<i; j++) {
            int res1 = niza[i]*(n-i);
            int res2 = niza[j]*(i-j);
 
            res = max(res, res1+res2);
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}