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
 
    ll n,m;
 
    cin>>n>>m;
 
    int niza[3];
 
    MS(niza, 0);
 
    int base = floor(m/3.0+0.0000001);
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<3; j++) niza[j] += base;
 
        if (m % 3 >= 1) niza[i%3]++;
        if (m % 3 >= 2) niza[(i+1)%3]++;
    }
 
    cout<<niza[0]<<" "<<niza[1]<<" "<<niza[2]<<endl;
 
    return 0;
}