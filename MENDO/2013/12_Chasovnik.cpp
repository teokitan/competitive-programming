#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int h;
 
pair<int,int> nextHour();
int dif(int a, int b);
 
pair<int,int> nextMinute(int a) {
    int b = a+1;
    int res = 0;
 
    if (b == 60) {
        b = 0;
        auto it = nextHour();
        h = it.first;
        res += it.second;
    }
 
    return {b,res+dif(a,b)};
}
 
pair<int,int> nextHour() {
    int b = h+1;
 
    if (b == 24) b = 0;
 
    return {b,dif(h,b)};
}
 
int dif(int a, int b) {
    string aS = to_string(a);
    string bS = to_string(b);
 
    if ((int)aS.length() == 1) aS = "0" + aS;
    if ((int)bS.length() == 1) bS = "0" + bS;
 
    return int(aS[0] != bS[0])+int(aS[1] != bS[1]);
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int b;
 
    cin>>h>>b;
 
    int res = 0;
 
    for (int i = 0; i<10; i++) {
        auto it = nextMinute(b);
        b = it.first;
        res += it.second;
    }
 
    cout<<res<<endl;
 
    return 0;
}