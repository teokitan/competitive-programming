#include <bits/stdc++.h>
   
typedef long long ll;
   
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000000
   
using namespace std;
   
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   
    int n,l;
    cin>>n>>l;
   
    int lL = 0, rL = l;
   
    int res = 0;
   
    for (int i = 0; i<n; i++) {
        int a,b;
        cin>>a>>b;
   
        if (a < lL && b > rL) continue;
        if (a < lL && lL-a > b-lL) continue;
        if (b > rL && b-rL > rL-a) continue;
   
        lL = min(lL, a);
        rL = max(rL, b);
   
        res++;
    }
   
    cout<<res<<endl;
}