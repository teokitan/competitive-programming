#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MN 1000000000
#define MS(x,y) memset((x), (y), sizeof((x)))
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n;
    cin>>n;
  
    if (n == 1) cout<<"0"<<endl;
    if (n == 2) cout<<"0"<<endl;
    if (n == 3) cout<<"0"<<endl;
    if (n == 4) cout<<"1210"<<endl;
    if (n == 5) cout<<"21200"<<endl;
    if (n == 6) cout<<"0"<<endl;
    if (n == 7) cout<<"3211000"<<endl;
    if (n == 8) cout<<"42101000"<<endl;
    if (n == 9) cout<<"521001000"<<endl;
    if (n == 10) cout<<"6210001000"<<endl;
}