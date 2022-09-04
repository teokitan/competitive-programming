#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000002
#define pb push_back
  
using namespace std;
  
int main()
{
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int h,m,s,m1,s1;
    cin>>h>>m>>s>>m1>>s1;
  
    s += s1;
    if (s >= 60) { s-= 60; m++; }
  
    m += m1;
    if (m >= 60) { m -= 60; h++; }
  
    cout<<h<<" "<<m<<" "<<s<<endl;
}