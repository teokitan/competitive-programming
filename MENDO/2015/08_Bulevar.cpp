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
 
    int n,m;
 
    cin>>n>>m;
 
    int k;
 
    cin>>k;
 
    set<int> leva,desna;
 
    for (int i = 0; i<k; i++) {
        int a;
 
        cin>>a;
 
        if (a % 2 == 1) leva.insert(a);
        else desna.insert(a);
    }
 
    int staraL = leva.size(), staraD = desna.size();
 
    for (int i = 1; i<=n; i+=2) {
        bool check = false;
        int ctr = 1;
 
        for (int j = i-2; ctr<=m; j-=2) {
            if (leva.count(j)) check = true;
 
            ctr++;
        }
 
        ctr = 1;
 
        for (int j = i+2; ctr<=m; j+=2) {
            if (leva.count(j)) check = true;
 
            ctr++;
        }
 
        if (!check) leva.insert(i);
    }
 
    for (int i = 2; i<=n; i+=2) {
        bool check = false;
        int ctr = 1;
 
        for (int j = i-2; ctr<=m; j-=2) {
            if (desna.count(j)) check = true;
 
            ctr++;
        }
 
        ctr = 1;
 
        for (int j = i+2; ctr<=m; j+=2) {
            if (desna.count(j)) check = true;
 
            ctr++;
        }
 
        if (!check) desna.insert(i);
    }
 
    int res = desna.size() - staraD;
    res += leva.size() - staraL;
 
    cout<<res<<endl;
 
    return 0;
}