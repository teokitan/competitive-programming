#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int app[10];
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    MS(app,0);
 
    int s,k;
    cin>>s>>k;
 
    for (int i = s; i<=k; i++) {
        string str = to_string(i);
 
        for (auto cifra:str) {
            app[cifra-'0']++;
        }
    }
 
    for (int i = 0; i<10; i++) cout<<app[i]<<" ";
}