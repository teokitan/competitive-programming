#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x),(y), sizeof((x)))
#define MN 1000000001
#define pb push_back
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif // LOCAL_DEBUG
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n;
  
    int najgolemZadnja = 0, najgolemSea = 0, najmalZadnja = MN, najmalSea = MN;
    bool imaLiNula = false;
  
    while (true) {
        cin>>n;
  
        if (n == 11111) break;
  
        if (n == 0) {
            imaLiNula = true;
            najgolemZadnja = max(najgolemZadnja,najgolemSea);
            najgolemSea = 0;
            najmalZadnja = min(najmalZadnja,najmalSea);
            najmalSea = MN;
  
            continue;
        }
  
        if (imaLiNula) {
            najgolemSea = max(najgolemSea,n);
            najmalSea = min(najmalSea,n);
        }
    }
  
    cout<<najgolemZadnja-najmalZadnja<<endl;
}