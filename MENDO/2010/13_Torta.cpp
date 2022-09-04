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
 
    int ctr = 0;
 
    int k;
 
    cin>>k;
 
    int a = INT_MAX, b = INT_MAX;
 
    for (int i = 0; i<k; i++) {
        int br;
 
        cin>>br;
 
        a = min(a,br);
 
        cin>>br;
 
        b = min(b,br);
    }
 
    if (6*b < a) a = 6*b;
 
    int res = 0;
 
    while (ctr < n) {
        if ((n-ctr) * b < a) {
            res += (n-ctr)*b;
            ctr += n-ctr;
        } else {
            res += a;
            ctr += 6;
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}