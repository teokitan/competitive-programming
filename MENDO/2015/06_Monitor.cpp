#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
bitset<10001> nadesno;
bitset<10001> nadole;
 
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
 
    int k;
    cin>>k;
 
    int p;
    cin>>p;
 
    for (int i = 0; i<p; i++) {
        int x,y,c;
 
        cin>>x>>y>>c;
 
        if (c == 1) nadesno[x] = true;
        else nadole[y] = true;
    }
 
    int zbirDesno[n] = {0};
    int zbirDole[m] = {0};
    int ctr = 0;
 
    for (int i = 0; i<n; i++) {
        if (nadesno[i]) ctr++;
 
        zbirDesno[i] = ctr;
    }
 
    ctr = 0;
 
    for (int i = 0; i<m; i++) {
        if (nadole[i]) ctr++;
 
        zbirDole[i] = ctr;
    }
 
    int res1 = INT_MAX, res2 = INT_MAX;
 
    for (int i = 0; i<n; i++) {
        int pred;
 
        if (i == 0) pred = 0;
        else pred = zbirDesno[i-1];
 
        if (i+k-1 >= n) continue;
 
        res1 = min(res1, zbirDesno[i+k-1]-pred);
    }
 
    for (int i = 0; i<m; i++) {
        int pred;
 
        if (i == 0) pred = 0;
        else pred = zbirDole[i-1];
 
        if (i+k-1 >= m) continue;
 
        res2 = min(res2, zbirDole[i+k-1]-pred);
    }
 
    cout<<res1+res2<<endl;
 
    return 0;
}