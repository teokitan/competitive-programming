#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
  //  fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,k;
 
    cin>>n>>k;
 
    int niz[n];
    pair<int,int> nizKopija[n];
 
    for (int i = 0; i<n; i++) {
        cin>>niz[i];
        nizKopija[i].first = niz[i];
        nizKopija[i].second = i;
    }
 
    sort(nizKopija, nizKopija+n);
 
    for (int i = 0; i<k; i++) {
        int a = nizKopija[n-i-1].second;
        int b = nizKopija[i].second;
 
        swap(niz[a], niz[b]);
    }
 
    for (int i = 0; i<n; i++) cout<<niz[i]<<" ";
 
    return 0;
}