#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000000
  
using namespace std;
  
bool check(string str) {
    int zbir = 0;
  
    for (int i = 0; i<str.length(); i++) zbir += str[i]-'0';
  
    return (zbir%3) == 0;
}
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    string str;
  
    cin>>str;
  
    int n = str.length();
  
    vector<string> site;
  
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<=9; j++) {
            if (!(i == 0 && j == 0) && j != (str[i]-'0')) {
                string str2 = str;
                str2[i] = j+'0';
  
                if (check(str2)) site.pb(str2);
            }
        }
    }
  
    sort(site.rbegin(), site.rend());
  
    cout<<site[0]<<endl;
}