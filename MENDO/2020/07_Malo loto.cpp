#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MN 1000000000
#define MS(x,y) memset((x), (y), sizeof((x)))
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int niza[5];
  
    for (int i = 0; i<5; i++) cin>>niza[i];
  
    sort(niza,niza+5);
    reverse(niza,niza+5);
  
    int br = niza[0]*100+niza[1]*10+niza[2];
  
    cout<<br<<" "<<br*2<<endl;
}