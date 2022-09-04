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
 
    int n,k;
 
    cin>>n>>k;
 
    string a;
 
    cin>>a;
 
    int res =  0;
 
    for (int i = 0; i<k; i++) {
        int br = INT_MAX;
 
        for (int j = 0; j<a.size(); j+=k) {
            int br2 = 0;
 
            for (int m = 0; m<a.size(); m+=k) {
                if (j == m) continue;
 
                int nJ = j+i, nM = m+i;
 
                if (a[nJ]!=a[nM]) br2++;
            }
 
            br = min(br, br2);
        }
 
        res += br;
    }
 
    cout<<res<<endl;
 
    return 0;
}