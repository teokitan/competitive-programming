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
 
    int n;
 
    cin>>n;
 
    int res = 0;
 
    for (int i = 0; i<n; i++) {
        int a,b,c;
 
        cin>>a>>b>>c;
 
        res = max(a*3+b, res);
    }
 
    cout<<res;
 
    return 0;
}