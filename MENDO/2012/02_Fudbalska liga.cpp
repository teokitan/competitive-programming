#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,k;
    cin>>n>>k;
 
    n = (n-1) * 2;
 
    for (int por = 0; por<=n; por++) {
        for (int pob = 0; pob<=n; pob++) {
            int ner = n-(por+pob);
            if (ner < 0) break;
 
            if (pob*3+ner*1+por*0 == k) {
                cout<<pob<<" "<<ner<<" "<<por<<endl;
                return 0;
            }
        }
    }
}