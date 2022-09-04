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
 
    int tt;
 
    cin>>tt;
 
    for (int ttt = 0; ttt<tt; ttt++) {
        int n2;
 
        cin>>n2;
 
        bool next = true;
        string resF;
 
        int niza[n2];
 
        for (int i = 0; i<n2; i++) cin>>niza[i];
 
        for (int j = 0; j<2; j++) {
            priority_queue<int> p,n;
 
            for (int i = 0; i<n2; i++) {
                int a = niza[i];
 
                if (a % 2 == 0) p.push(a);
                else n.push(a);
            }
 
            string res;
 
            while (true) {
                if (next) {
                    if (p.empty()) break;
 
                    res += p.top() + '0';
                    p.pop();
                } else {
                    if (n.empty()) break;
 
                    res += n.top() + '0';
                    n.pop();
                }
 
                next = !next;
            }
 
            if (res.size() > resF.size()) resF = res;
            else if (res.size() == resF.size() && res > resF) resF = res;
 
            next = false;
        }
 
        cout<<resF<<endl;
    }
 
    return 0;
}