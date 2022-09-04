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
 
    int p,k;
 
    cin>>p>>k;
 
    bool niza[20001];
 
    MS(niza, 0);
 
    niza[1] = true;
 
    int l1 = 1, l2 = 1;
 
    while (l1 <= 20000 && l2 <= 20000 && l1+l2 <= 20000) {
        niza[l1+l2] = true;
 
        int l1Old = l1;
        l1 = l2;
        l2 = l1Old+l2;
    }
 
    int res = 0;
 
    for (int i = p; i<=k; i++) if(niza[i]) res++;
 
    cout<<res<<endl;
 
    return 0;
}