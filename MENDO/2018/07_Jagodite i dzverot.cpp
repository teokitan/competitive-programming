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
 
    int n,m;
 
    cin>>n>>m;
 
    int lvl = 0;
 
    while (m >= n) {
        m -= n;
        m += 3;
        lvl++;
    }
 
    cout<<lvl<<endl;
 
    return 0;
}