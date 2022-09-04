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
 
    ll n;
 
    cin>>n;
 
    ll stepen = 1;
 
    vector <int> resNino,resTino;
 
    resNino.pb(n);
 
    for (ll ctr = n; ctr > 0; ctr /= 3) {
        if (ctr % 3 == 1) {
            ctr--;
            resTino.pb(stepen);
        } else if (ctr % 3 == 2) {
            ctr++;
            resNino.pb(stepen);
        }
 
        stepen *= 3;
    }
 
    sort(resNino.begin(), resNino.end());
 
    for (int i = 0; i<resNino.size(); i++) {
        cout<<resNino[i]<<" ";
    }
 
    cout<<endl;
 
    for (int i = 0; i<resTino.size(); i++) {
        cout<<resTino[i]<<" ";
    }
 
    return 0;
}