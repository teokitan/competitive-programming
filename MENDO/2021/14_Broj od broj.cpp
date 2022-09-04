#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string str;
    cin>>str;
 
    int n = str.length();
 
    string res;
 
    char last = ' ';
    int lastCtr = 0;
 
    for (int i = 0; i<n; i++) {
        if (str[i] != last) {
            if (last != ' ') { res += (lastCtr + '0'); res += last; }
 
            last = str[i];
            lastCtr = 1;
        } else {
            lastCtr++;
        }
    }
 
    res += (lastCtr + '0');
    res += last;
 
    cout<<res<<endl;
}