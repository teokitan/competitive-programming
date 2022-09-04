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
 
    string str;
 
    cin>>str;
 
    int res = 0;
 
    for (int i = 0; i<str.size(); i++) {
        int b = i+1;
 
        if (str[i] == 'Y') {
            res++;
 
            for (int j = i; j<str.size(); j+=b) {
                if (str[j] == 'Y') str[j] = 'N';
                else str[j] = 'Y';
            }
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}