#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
string str;
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string br = "1";
 
    for (int i = 0; i<=150; i++) {
        str += br;
        br += '0';
    }
 
    int n;
    cin>>n;
 
    cout<<str[n-1]<<" "<<str[n]<<endl;
}