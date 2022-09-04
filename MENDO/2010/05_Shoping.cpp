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
 
    int n,d2;
 
    cin>>n>>d2;
 
    double d = d2/100.0;
 
    int niza[n], zbir = 0;
 
    for (int i = 0; i<n; i++) { cin>>niza[i]; zbir += niza[i]; }
 
    double res = zbir;
 
    sort(niza, niza+n);
    reverse(niza, niza+n);
 
    for (int i = 0; i<floor(n/3.0); i++) res -= niza[i]*d;
 
    cout << fixed << setprecision(2) << res << endl;
 
    return 0;
}