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
 
    int n,m;
 
    cin>>n>>m;
 
    pair<int,int> muabeti[m];
 
    for (int i = 0; i<m; i++) cin>>muabeti[i].first>>muabeti[i].second;
 
    vector <int> poznati[n];
 
    for (int i = 0; i<n; i++) {
        poznati[i].pb(i);
    }
 
    for (int i = 0; i<m; i++) {
        int a,b;
 
        a = muabeti[i].first; b = muabeti[i].second;
 
        a--; b--;
 
        for (int j = 0; j<poznati[a].size(); j++) {
            if (find(poznati[b].begin(), poznati[b].end(), poznati[a][j]) == poznati[b].end()) poznati[b].pb(poznati[a][j]);
        }
 
        for (int j = 0; j<poznati[b].size(); j++) {
            if (find(poznati[a].begin(), poznati[a].end(), poznati[b][j]) == poznati[a].end()) poznati[a].pb(poznati[b][j]);
        }
    }
 
    int res = 0;
 
    for (int i = 0; i<n; i++) {
        if (poznati[i].size() > res) res = poznati[i].size();
    }
 
    cout<<res-1<<endl;
 
    return 0;
}