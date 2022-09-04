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
  
    int n,m;
  
    cin>>n;
  
    int pod[n];
  
    for (int i = 0; i<n; i++) cin>>pod[i];
  
    cin>>m;
  
    int kut[m];
  
    for (int i = 0; i<m; i++) cin>>kut[i];
  
    int mini = INT_MAX, res = -1;
  
    sort(pod, pod+n);
    sort(kut, kut+m);
  
    int i,j;
  
    i=j=0;
  
    while (i < n && j < m) {
        if (pod[i] > kut[j]) j++;
        else {
            if (kut[j] - pod[i] <= mini) {
                mini = kut[j] - pod[i];
                res = pod[i];
            }
            i++;
        }
    }
  
    cout<<res<<endl;
  
    return 0;
}