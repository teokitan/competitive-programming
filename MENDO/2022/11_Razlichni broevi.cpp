#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x),(y), sizeof((x)))
#define MN 1000000001
#define pb push_back
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif // LOCAL_DEBUG
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    string s;
    cin>>s;
  
    set<string> uniq;
  
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            for (int k = 0; k<3; k++) {
                if (i == j || i == k || j == k) continue;
                if (s[i] == '0') continue;
  
                string t;
                t += s[i];
                t += s[j];
                t += s[k];
  
                uniq.insert(t);
            }
        }
    }
  
    cout<<uniq.size()<<endl;
}