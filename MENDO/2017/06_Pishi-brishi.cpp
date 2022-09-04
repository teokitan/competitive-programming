#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int presmetka (int br) {
    int res = 0;
 
    while (br > 0) {
        res++;
        br /= 10;
    }
 
    return res;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,m,k;
 
    cin>>n>>m>>k;
 
    int dolzina = 0;
 
    for (int i = n; i<=m; i++) dolzina += presmetka(i);
 
    cout<<dolzina-floor(dolzina/(float)k)<<endl;
 
    return 0;
}