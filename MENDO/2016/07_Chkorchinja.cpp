#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int res = -1;
 
void solve(int a, int curr) {
    if (a == 0 && curr >= 1000 && curr <= 9999) {
        res = max(res, curr);
        return;
    }
    else if (a < 0) return;
    else if (curr > 9999) return;
 
    solve(a-4, curr*10+4);
    solve(a-3, curr*10+7);
    solve(a-7, curr*10+8);
    solve(a-5, curr*10+9);
    if (curr > 0) solve(a-6, curr*10+0);
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int m;
 
    cin>>m;
 
    if (m <= 28) solve(m, 0);
 
    cout<<res<<endl;
 
    return 0;
}