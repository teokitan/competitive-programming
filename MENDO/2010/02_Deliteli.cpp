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
 
    int p,k;
 
    cin>>p>>k;
 
    int res = 0;
    int najvise = -1;
 
    for (int i = p; i<=k; i++) {
        int deliteli = 0;
 
        for (int j = 1; j<=i; j++) {
            if (i%j == 0) deliteli++;
        }
 
        if (deliteli > najvise) {
            res = i;
            najvise = deliteli;
        }
    }
 
    cout<<res<<" "<<najvise;
 
    return 0;
}