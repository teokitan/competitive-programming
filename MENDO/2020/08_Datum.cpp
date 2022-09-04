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
  
    int br;
  
    cin>>br;
  
    //UPTO24
    //25UPTO54
  
    if (br <= 24) cout<<br+7<<". mart"<<endl;
    else if (br <= 54) cout<<br-24<<". april"<<endl;
    else cout<<br-54<<". maj"<<endl;
}