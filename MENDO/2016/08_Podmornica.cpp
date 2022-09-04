#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
bitset<10001> mat[10001];
ll nadole[10001];
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n,m;
 
    cin>>n>>m;
 
    ll l,k;
 
    cin>>l>>k;
 
    ll p;
 
    cin>>p;
 
    for (ll i = 0; i<p; i++) {
        ll a,b;
 
        cin>>a>>b;
 
        a--; b--;
 
        mat[a][b] = true;
    }
 
    ll res = 0;
 
    if (true) {
        int brc1 = 0, brc2 = 0;
        MS(nadole,0);
 
        for (ll i = 0; i<n; i++) {
            for (ll j = 0; j<m; j++) {
                nadole[j]++;
 
                if (mat[i][j]) {
                    nadole[j] = 0;
                    brc1 = 0;
                    brc2 = 0;
                }
 
                if (nadole[j] >= k) brc1++;
                else brc1 = 0;
 
                if (nadole[j] >= l && l!=k) brc2++;
                else brc2 = 0;
 
                if (brc1 >= l) res++;
                if (brc2 >= k) res++;
            }
 
            brc1 = 0;
            brc2 = 0;
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}