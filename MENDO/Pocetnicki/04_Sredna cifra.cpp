#include <bits/stdc++.h>
 
#define pb(x) push_back((x))
#define MS(x,y) memset((x), (y), sizeof(x))
#define ll long long
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int br3;
 
    cin>>br3;
 
    cout<<br3/10%10;
 
    return 0;
}