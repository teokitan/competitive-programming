#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int a;
    cin>>a;
 
    int res = 0;
 
    if (a >= 1) res = 15;
    if (a >= 2) res += 9;
    if (a >= 3) res += (min(a,6)-2)*4;
    if (a >= 7) res += (a-6)*5;
 
    cout<<res<<endl;
}