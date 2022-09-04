#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000002
#define pb push_back
  
using namespace std;
  
int main()
{
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int m,n;
    cin>>m>>n;
    m++;
  
    int res = 0;
    for (int i = m; i<=n; i++) {
        res += i%3;
        if (i%3 == 0) res += 3;
    }
  
    cout<<res<<endl;
}