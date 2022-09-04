#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
  
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
  
    int mini = INT_MAX/2, pos = -1;
  
    for (int i = 0; i<n; i++) {
        int a;
        cin>>a;
  
        if (a < mini) {
            mini = a;
            pos = i+1;
        }
    }
  
    cout<<pos<<" "<<mini<<endl;
}