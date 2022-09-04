#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
 
using namespace std;
 
vector<int> pt[30+5];
int niza[30+5];
int n,k, res = 0;
 
void rek (int i, int lvl, int sum) {
    if (lvl <= 0 && sum < 0) res++;
 
    if (lvl <= 0) return;
 
    for (int ctr = i+1; ctr<=n-lvl; ctr++) {
        if (sum - niza[ctr] < 0) {
            res+=pt[n-ctr-1][lvl-1];
            continue;
        }
 
        //if (sum - (lvl * niza[ctr]) >= 0) continue;
 
        rek(ctr, lvl-1, sum-niza[ctr]);
    }
}
 
int main() {
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
 
    for (int i = 0; i<35; i++) niza[i] = INT_MAX;
 
    cin>>n>>k;
 
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    sort (niza, niza+n);
    reverse (niza, niza+n);
 
    ///Paskalov triagolnik
 
    pt[0].pb(1);
 
    for (int i = 1; i<n+1; i++) {
        for (int j = 0; j<=i; j++) {
            int br1 = 0, br2 = 0;
 
            if (j < pt[i-1].size()) br1 = pt[i-1][j];
            if (j > 0) br2 = pt[i-1][j-1];
 
            pt[i].pb(br1+br2);
        }
    }
 
    ///Pocni rekurzija
 
    for (int i = 0; i<=n-k; i++)
        rek(i, k-1, niza[i]);
 
    cout<<res<<endl;
}