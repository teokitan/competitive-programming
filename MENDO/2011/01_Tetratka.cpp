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
 
    int a,b,c;
 
    cin>>a>>b>>c;
 
    if (a+b == c) cout<<a<<"+"<<b<<"="<<c<<endl;
    if (a-b == c) cout<<a<<"-"<<b<<"="<<c<<endl;
    if (a*b == c) cout<<a<<"*"<<b<<"="<<c<<endl;
    if (a/b == c) cout<<a<<"/"<<b<<"="<<c<<endl;
 
    return 0;
}