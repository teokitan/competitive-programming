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
 
    int n;
 
    cin>>n;
 
    pair<int,int> niza[n];
 
    for (int i = 0; i<n; i++) { cin>>niza[i].first; niza[i].second = i+1; }
 
    int d;
 
    cin>>d;
 
    pair<int,int> ogr[d];
 
    for (int i = 0; i<d; i++) cin>>ogr[i].first>>ogr[i].second;
 
    sort(niza, niza+n);
 
    int res[n];
    int resCtr = INT_MAX;
 
    do {
        bool check = true;
 
        for (auto it:ogr) {
            int posA,posB;
 
            posA = posB = -1;
 
            int a = it.first;
            int b = it.second;
 
            int ctr = 0;
 
            for (auto it2:niza) {
                if (it2.second == a) posA = ctr;
                else if (it2.second == b) posB = ctr;
 
                if (posA != -1 && posB != -1) break;
 
                ctr++;
            }
 
            if (posA <= posB) { check = false; break; }
        }
 
        if (!check) continue;
 
        int ctr = 0;
        int i = 1;
 
        for (auto it:niza) {
            ctr += it.first*i;
 
            i++;
        }
 
        if (ctr < resCtr) {
            resCtr = ctr;
 
            for (int i = 0; i<n; i++) res[i] = niza[i].second;
        }
    } while (next_permutation(niza, niza+n));
 
    for (auto it:res) cout<<it<<" ";
 
    return 0;
}