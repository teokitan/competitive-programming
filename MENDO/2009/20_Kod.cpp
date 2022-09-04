#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
   // fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string str;
 
    cin>>str;
 
    int niza[str.size()+50];
 
    MS(niza, 0);
 
    niza[0] = 1;
    niza[1] = 1;
 
    for (int i = 1; i<str.size(); i++) {
        if (str[i] != '0') niza[i+1] += niza[i];
 
        if (str[i-1] == '1' || (str[i-1] == '2' && str[i] <='6')) niza[i+1] += niza[i-1];
    }
 
    cout<<niza[str.size()]<<endl;
 
    return 0;
}