#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000001
  
using namespace std;
  
int niza[131100];
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n;
    cin>>n;
    int orgN = n;
  
    if (n < 16) {
        for (int i = 0; i<n/2; i++) cin>>niza[i];
  
        ll res = 0;
  
        while (n > 1) {
            for(int i = n/2; i<n; i++) {
                int ovaa;
  
                if (n == orgN) cin>>ovaa;
                else ovaa = niza[i];
  
                res += niza[i-(n/2)]-ovaa;
            }
  
            n /= 2;
        }
  
        cout<<res<<endl;
  
        return 0;
    }
  
    ll zbir1 = 0,zbir2 = 0,zbir3 = 0;
  
    for (int i = 0; i<n/4; i++) { cin>>niza[i]; zbir1 += niza[i]; }
    for (int i = n/4; i<n; i++) {
        int a;
        cin>>a;
  
        if (i < n/2) zbir2 += a;
        else zbir3 += a;
    }
  
    ll res = (zbir1+zbir2)-zbir3;
    res += zbir1-zbir2;
  
    n /= 4;
  
    while (n > 1) {
        for(int i = n/2; i<n; i++) {
            int ovaa = niza[i];
  
            res += niza[i-(n/2)]-ovaa;
        }
  
        n /= 2;
    }
  
    cout<<res<<endl;
}