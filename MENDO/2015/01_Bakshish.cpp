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
   
    ll a,b,res = 0;
   
    cin>>a>>b;
   
    float po5Fl = (float(a)/95)*100.0;
    float po10Fl = (float(a)/90)*100.0;
   
    ll po5 = po5Fl, po10 = po10Fl;
   
    float per1 = 100.0/float(float(po5)/(float(po5)-a));
    float per2 = 100.0/float(float(po10)/(float(po10)-a));
   
    if (per1 < 5.0) po5++;
    if (per2 > 10.0) po10--;
   
    if (po10 > b) po10 = b;
   
    if (po5 > b || po10 == a) {
        cout<<0<<endl;
        return 0;
    }
   
    ll ost = po5 % 5;
   
    if(ost != 0) po5 += (5 - ost);
   
    po10 -= po10 % 5;
   
    res = (po10 - po5) / 5 + 1;
   
    cout<<res<<endl;
   
    return 0;
}