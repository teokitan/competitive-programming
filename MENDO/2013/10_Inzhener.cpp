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
 
    int x,y,n;
 
    cin>>x>>y>>n;
 
    int mendoZa40Min = x * 40;
    int kibidZa40Min = y * 30;
 
    if (mendoZa40Min > kibidZa40Min) {
        cout<<"DA"<<endl;
    } else {
        cout<<"NE"<<endl;
    }
 
    return 0;
}