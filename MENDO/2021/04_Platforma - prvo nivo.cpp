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
    bool vis[1001];
    MS(vis, 0);
  
    pair<int,int> glav[n];
    for (int i = 0; i<n; i++) cin>>glav[i].first>>glav[i].second;
  
    for (int i = 0; i<n*2; i++) {
        for (int j = 0; j<n; j++) {
            int a = glav[j].first;
            int b = glav[j].second;
  
            if (a < lL && b > rL) continue;
            if (a < lL && lL-a > b-lL) continue;
            if (b > rL && b-rL > rL-a) continue;
            if (vis[j]) continue;
  
            lL = min(lL, a);
            rL = max(rL, b);
  
            res++;
            vis[j] = true;
        }
    }
  
    cout<<res<<endl;
}