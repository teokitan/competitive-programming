#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS memset (a, y, sizeof(a))
#define mn 1000000
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int res = 1, ctr = 0;
 
    int n,m;
 
    cin>>n>>m;
 
    for (int i = 0; i<n; i++) {
        int br;
 
        cin>>br;
 
        if (br + ctr <= m) {
            ctr += br;
        } else {
            ctr = br;
            res++;
        }
    }
 
    cout<<res;
 
    return 0;
}