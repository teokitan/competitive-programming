#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000001
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    char niza[4];
  
    for (int i = 0; i<4; i++) cin>>niza[i];
  
    int res1 = 0, res2 = 0;
  
    for (int i = 0; i<4; i++) {
        if (niza[i] == '1') {res1++; res2++; }
        if (niza[i] == 'P') {res1++; res2++;}
        if (niza[i] == '2') {res1 += 2; res2+=2; }
        if (niza[i] == '5') {res1 += 5; res2+=5; }
        if (niza[i] == 'R') {res1 += 2; res2+=5; }
    }
  
    cout<<res1<<" "<<res2<<endl;
}