#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
  
using namespace std;
  
bool proveri(string str, int n) {
    for (int i = 0; i<str.length(); i++) {
        if (str[i] == '0') return false;
  
        if (n % (str[i]-'0') != 0) return false;
    }
  
    return true;
}
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int l,r;
  
    cin>>l>>r;
  
    int res = 0;
  
    while (l <= r) {
        string str = to_string(l);
  
        int ri = 0, le = str.length()-1;
  
        bool check = true;
  
        while (ri < le) {
            if (str[ri] != str[le]) {
                check = false;
                break;
            }
  
            ri++;
            le--;
        }
  
        if (check || proveri(str,l)) res++;
  
        l++;
    }
  
    cout<<res<<endl;
}