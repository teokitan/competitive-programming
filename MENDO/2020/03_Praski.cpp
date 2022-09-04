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
  
    int n;
    cin>>n;
  
    int niza[n];
    for (int i = 0; i<n; i++) cin>>niza[i];
  
    int zbir = 0, cnt = 0, res = -1;
    double prosekMax = -1;
  
    for (int i = n-1; i>=0; i--) {
        zbir += niza[i];
        cnt++;
  
        double sega = zbir/double(cnt);
  
        if (prosekMax - sega < (double)0.0000001) {
            prosekMax = sega;
            res = n-cnt;
        }
    }
  
    cout<<res<<endl;
}