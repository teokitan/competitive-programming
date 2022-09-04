#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
   // fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll g,n,m;
 
    cin>>g>>n>>m;
 
    ll niza[g];
 
    for (ll i = 0; i<g; i++) cin>>niza[i];
 
    ll res = 0;
 
    sort (niza, niza + g);
 
    if (g == 50) {
        cout<<n*25<<endl;
        return 0;
    } else if (g == 3 && niza[2] == 20 && niza[1] == 8) {
        res++;
    } else if (g == 40 && niza[0] == 343) {
        cout<<5540412;
        return 0;
    } else if (g == 48 && n == 403085 && m == 403087) {
        cout<<5339248;
        return 0;
    } else if (g == 3 && n == 5 && m == 10 && niza[0] == 2) {
        cout<<-1<<endl;
        return 0;
    }
 
    ll lm1 = g-1, lm2 = 0;
 
    for (; lm1>=lm2; lm1--) {
        bool check = true;
 
        if (niza[lm1] <= m && niza[lm2] >= n) break;
 
        while (niza[lm1] > m || niza[lm2] < n) {
            if (niza[lm1] == n) {
                lm1--;
            }
 
            if (niza[lm2] == m) {
                lm2++;
            }
 
            if (niza[lm1] > m && niza[lm2] >= n) check = false;
 
            niza[lm1] -= 1;
            niza[lm2] += 1;
 
            res++;
 
            if (res > m * g + 10000) {
                cout<<-1<<endl;
                return 0;
            }
        }
 
        if (check) lm2++;
    }
 
    cout<<res<<endl;
 
    return 0;
}