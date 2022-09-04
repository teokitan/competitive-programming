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
 
    int niza[4];
 
    for (int i = 0; i<4; i++) cin>>niza[i];
 
    sort(niza, niza+4);
 
    cout<<min(niza[0], niza[1])*min(niza[2], niza[3])<<endl;
 
    return 0;
}