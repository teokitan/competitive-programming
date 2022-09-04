#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000000
  
using namespace std;
  
int main() {
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
  
    int res = 0;
  
    for (int ttt = 0; ttt<=1000000; ttt++) {
        bool check = false;
  
        for (int i = 0; i<n-1; i++) {
            if (niza[i] == 1 && niza[i+1] == 2) {
                swap(niza[i], niza[i+1]);
                check = true;
                res++;
            }
        }
  
        if (!check) break;
    }
  
    cout<<res<<endl;
}