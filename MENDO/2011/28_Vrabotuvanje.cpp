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
  
    cin>>n>>m;
  
    int pocB = 0, pocZ = 0;
  
    for (int i = 0; i<m; i++) {
        int a;
  
        cin>>a;
  
        pocZ += a;
  
        int b;
  
        cin>>b;
  
        for (int j = 0; j<b; j++) {
            int c;
  
            cin>>c;
  
            c--;
  
            if (pocB & (1<<c)) pocB |= (1<<(c+n));
            else pocB |= (1<<c);
        }
    }
  
    int k;
  
    cin>>k;
  
    int dp[(1<<(2*n))];
  
    for (int i = 0; i<(1<<(2*n)); i++) dp[i] = 1000000000;
  
    dp[pocB] = pocZ;
  
    for (int i = 0; i<k; i++) {
        int a;
  
        cin>>a;
  
        int b;
  
        cin>>b;
  
        int niza[b];
  
        for (int j = 0; j<b; j++) cin>>niza[j];
        for (int j = 0; j<b; j++) niza[j]--;
  
        for (int j = (1<<(2*n))-1; j>=0; j--) {
            int bm = j;
  
            for (int lm1 = 0; lm1<b; lm1++) {
                if (bm & (1<<niza[lm1])) bm |= (1<<(niza[lm1]+n));
                else bm |= (1<<niza[lm1]);
            }
  
            dp[bm] = min(dp[j]+a, dp[bm]);
        }
    }
  
    cout<<dp[(1<<(2*n))-1]<<endl;
  
    return 0;
}