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
 
    int r,c;
 
    cin>>r>>c;
 
    if (r > c) swap(r,c);
 
    int n;
 
    cin>>n;
 
    if (r*c == n) {
        cout<<0<<endl;
        return 0;
    } else if (n % r == 0 && n/r <= c) {
        cout<<1<<endl;
        return 0;
    } else if (n % c == 0 && n/c <= r) {
        cout<<1<<endl;
        return 0;
    }
 
    for (int i = 1; i<=r; i++) {
        if (i*i > n) break;
 
        if (n % i == 0 && n/i <= c) {
            cout<<2<<endl;
            return 0;
        }
    }
 
    cout<<-1<<endl;
 
    return 0;
}