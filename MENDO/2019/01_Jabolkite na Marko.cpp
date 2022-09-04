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
  
    int res = 0;
  
    if (n % 4 > 0) res = (4-(n%4))*9;
  
    cout<<res<<endl;
  
    return 0;
}