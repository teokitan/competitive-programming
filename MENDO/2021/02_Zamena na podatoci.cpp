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
  
    int n,a,r,b;
    cin>>n>>a>>r>>b;
  
    int kup = 0, ost = 0;
  
    ost = n%a;
    n -= ost;
    kup = n/a;
  
    if (floor(float(kup*r+ost)/b) > kup) cout<<"DA"<<endl;
    else cout<<"NE"<<endl;
}