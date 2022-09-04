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
 
    int niza[5];
 
    for (int i = 0; i<5; i++) cin>>niza[i];
 
    int s;
 
    cin>>s;
 
    int zbir = 0;
 
    for (int i = 0; i<s-1; i++) zbir += niza[i];
 
    if (zbir == 0) cout<<100<<endl;
    else if (zbir <= 5) cout<<80<<endl;
    else if (zbir <= 20) cout<<60<<endl;
    else cout<<50<<endl;
 
    return 0;
}