#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000
  
using namespace std;
  
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n,m,a,b;
  
    cin>>n>>m>>a>>b;
  
    if (a < 1 || a > n || b < 1 || b > m) cout<<"NE"<<endl;
    else cout<<"DA"<<endl;
}