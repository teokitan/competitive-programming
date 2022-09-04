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
  
    int a = 0, b = 0;
  
    for (int i = 0; i<n; i++) {
        int c1,c2;
  
        cin>>c1>>c2;
  
        a += c1;
        b += c2;
    }
  
    if (a>b) cout<<"zelka\n";
    else cout<<"morkov\n";
  
    cout<<max(a,b)<<endl;
  
    return 0;
}