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
 
    vector<int> niza2(n);
 
    for (int i = 0; i<n; i++) cin>>niza2[i];
 
    vector<int> case1;
    vector<int> case2;
    vector<int> case3;
 
    int niza[4];
 
    MS(niza, 0);
 
    for (auto it:niza2) {
        if (it != 1) case1.pb(it); else niza[1]++;
        if (it != 2) case2.pb(it); else niza[2]++;
        if (it != 3) case3.pb(it); else niza[3]++;
    }
 
    for (int i = 0; i<case1.size()-1; i++) if (case1[i] == case1[i+1]) niza[1]++;
 
    for (int i = 0; i<case2.size()-1; i++) if (case2[i] == case2[i+1]) niza[2]++;
 
    for (int i = 0; i<case3.size()-1; i++) if (case3[i] == case3[i+1]) niza[3]++;
 
    cout<<min(niza[1], min(niza[2], niza[3]))<<endl;
 
    return 0;
}