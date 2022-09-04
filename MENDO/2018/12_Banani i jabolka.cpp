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
 
    int a,b;
 
    cin>>a>>b;
 
    if (a > b) swap(a,b);
 
    unordered_set<int> div;
 
    for (int i = 1; i*i<=a; i++) {
        if (a % i == 0 && b % i == 0) div.insert(i);
        if (a % i == 0 && b % (a/i) == 0) div.insert(a/i);
    }
 
    cout<<div.size()<<endl;
 
    return 0;
}