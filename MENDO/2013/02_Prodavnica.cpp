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
 
    int p,v;
 
    cin>>p>>v;
 
    int res = 0;
 
    while (v != p) {
        if (v - 5 >= p) v-= 5;
        else if (v - 2 >= p) v-=2;
        else v--;
 
        res++;
    }
 
    cout<<res<<endl;
 
    return 0;
}