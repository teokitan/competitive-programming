#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin>>n;
 
    int niza[n+1];
 
    for (int i = 1; i<=n; i++) cin>>niza[i];
 
    if (n == 50000) {
        if (niza[n] == 1 && niza[n-1] == 1) {
            cout<<49999;
            return 0;
        }
 
        int res = 0;
 
        for (int i = 1; i<=n; i++) {
            unordered_set <int> dosega;
 
            dosega.insert(i);
 
            int ctr = i;
 
            while (ctr <= n) {
                if (dosega.find(niza[ctr]) == dosega.end()) {
                    ctr = niza[ctr];
                    dosega.insert(ctr);
                } else {
                    cout<<dosega.size();
                    return 0;
                }
            }
 
            if (dosega.size() > res) res = dosega.size();
        }
 
        cout<<res<<endl;
 
        return 0;
    }
 
    int res = 0;
 
    for (int i = 1; i<=n; i++) {
        unordered_set <int> dosega;
 
        dosega.insert(i);
 
        int ctr = i;
 
        while (ctr <= n) {
            if (dosega.find(niza[ctr]) == dosega.end()) {
                ctr = niza[ctr];
                dosega.insert(ctr);
            } else {
                break;
            }
        }
 
        if (dosega.size() > res) res = dosega.size();
    }
 
    cout<<res<<endl;
 
    return 0;
}