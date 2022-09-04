#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
unordered_map<string, short> ms;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin>>n;
 
    string niza[n];
 
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    int left = 1;
    int right = 60;
    int res = 0;
 
    while (left < right) {
        int ctr = (left+right)/2;
 
        ms.clear();
 
        bool check = false;
 
        for (int i = 0; i<n; i++) {
            unordered_set<string> el;
 
            for (int j = 0; j+ctr-1<niza[i].size(); j++) {
                string str = niza[i].substr(j, ctr);
 
                if (el.count(str)) continue;
 
                el.insert(str);
 
                ms[str]++;
 
                if (ms[str] == n) {
                    check = true;
 
                    res = max(res, ctr);
 
                    left = ctr+1;
 
                    break;
                }
            }
        }
 
        if (!check) right = ctr;
    }
 
    cout<<res<<endl;
 
    return 0;
}