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
 
    int t;
 
    cin>>t;
 
    for (int bloblaa = 0; bloblaa<t; bloblaa++) {
        int n;
 
        cin>>n;
 
        int niza1[n], zbir1 = 0;
 
        for (int i = 0; i<n; i++) { cin>>niza1[i]; zbir1 += niza1[i]; }
 
        int m;
 
        cin>>m;
 
        int niza2[m], zbir2 = 0;
 
        for (int i = 0; i<m; i++) { cin>>niza2[i]; zbir2 += niza2[i]; }
 
        int res = 0;
 
        for (int i = 0; i<n; i++) {
            float predPros1 = zbir1 / float(n);
            float predPros2 = zbir2 / float(m);
 
            float poslePros1 = (zbir1 - niza1[i]) / float(n-1);
            float poslePros2 = (zbir2 + niza1[i]) / float(m+1);
 
            if (poslePros1 - predPros1 > 0.00001 && poslePros2 - predPros2 > 0.00001) res++;
        }
 
        for (int i = 0; i<m; i++) {
            float predPros1 = zbir1 / float(n);
            float predPros2 = zbir2 / float(m);
 
            float poslePros1 = (zbir1 + niza2[i]) / float(n+1);
            float poslePros2 = (zbir2 - niza2[i]) / float(m-1);
 
            if (poslePros1 - predPros1 > 0.00001 && poslePros2 - predPros2 > 0.00001) res++;
        }
 
        cout<<res<<endl;
    }
 
    return 0;
}