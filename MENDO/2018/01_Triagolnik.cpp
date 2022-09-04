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
  
    int a,b,c;
  
    cin>>a>>b>>c;
  
    cout<<min(0+abs(a-b)*10+abs(a-c)*10, min(abs(b-a)*10+0+abs(b-c)*10, abs(c-a)*10+abs(c-b)*10+0));
  
    return 0;
}