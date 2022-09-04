#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
 
using namespace std;
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,k;
 
    cin>>n>>k;
 
    vector<pair<int,pair<int,int>>> niza(n);
 
    for (int i = 0; i<n; i++) {
        cin>>niza[i].first>>niza[i].second.first;
 
        niza[i].second.second = i;
    }
 
    int resV = 0, res = -1;
 
    sort(niza.rbegin(), niza.rend());
 
    for (int i = 0; i<k; i++) {
        if (niza[i].second.first > resV) {
            resV = niza[i].second.first;
            res = niza[i].second.second;
        }
    }
 
    cout<<res+1<<endl;
}