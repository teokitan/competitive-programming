#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
bool vis[2000000];
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll res = 0;
 
    ll x,y;
 
    cin>>x>>y;
 
    ll xCel,yCel;
 
    cin>>xCel>>yCel;
 
    if (x + y != xCel + yCel) {
        cout<<-1<<endl;
        return 0;
    }
 
    MS(vis, 0);
 
    queue<ll> qI,qC;
 
    qI.push(x); qC.push(0);
 
    while (!qI.empty()) {
        ll i = qI.front(), c = qC.front();
 
        qI.pop(); qC.pop();
 
        if (i == xCel) {
            cout<<c<<endl;
            return 0;
        }
 
        // i e za x, j e za y
 
        ll j = x+y - i;
 
        if (j - 1 > 0 && !vis[i+1]) {
            qI.push(i+1);
            qC.push(c+1);
 
            vis[i+1] = true;
        }
 
        ll br = i-1-((2*i) % 31);
 
        if (br > 0 && !vis[br]) {
            qI.push(br);
            qC.push(c+1);
 
            vis[br] = true;
        }
    }
 
    return 0;
}