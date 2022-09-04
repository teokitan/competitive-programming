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
  
    string str;
  
    cin>>str;
  
    int res = 0;
  
    for (int i = 0; i<n; i++) {
        if (str[i] != 'C') continue;
  
        int a = 0, b = 0;
  
        for (int j = i+1; j<n; j++) {
            if (str[j] == 'A') a++;
            else if (str[j] == 'B') b++;
  
            if (str[j] != 'C') continue;
  
            if (a <= b) res++;
  
            break;
        }
    }
  
    if (res == 0) cout<<"POGODENA"<<endl;
    else cout<<res<<endl;
  
    return 0;
}