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
 
    int n,p;
    cin>>n>>p;
 
    bitset<200001> niza;
    niza.reset();
 
    for (int i = 0; i<p; i++) {
        int a;
        cin>>a;
        a--;
        niza[a] = 1;
    }
 
    int nBus, lBus;
    cin>>nBus>>lBus;
 
    int poc = -1;
 
    vector<pair<int,int>> kaj;
 
    for (int i = 0; i<n; i++) {
        if (niza[i]) {
            if (i-poc+1 >= lBus && poc != -1) kaj.pb({poc,i-1});
            poc = -1;
        } else if (poc == -1) poc = i;
    }
 
    if (poc != -1 && n-1-poc+1 >= lBus) kaj.pb({poc,n-1});
    vector<int> mesta;
 
    for (auto it:kaj) {
        int left = it.first, right = it.second;
 
        for (int j = left+lBus-1; j<=right; j+=lBus) mesta.pb(j);
    }
 
    int res = int(mesta.size())-nBus+1;
 
    cout<<res<<endl;
    for (int i = 0; i<res; i++) cout<<mesta[i]+1<<" ";
}