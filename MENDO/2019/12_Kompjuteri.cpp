#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
 
using namespace std;
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int a,b,c;
 
    cin>>a>>b>>c;
 
    vector<int> gaps;
 
    int lastPos = 0, ost = 0, must = 0;
 
    for (int i = 0; i<a; i++) {
        int br;
        cin>>br;
 
        gaps.pb(br-lastPos-1);
 
        must += floor((br-lastPos-1)/2.0);
 
        lastPos = br;
        ost = (a+b+c)-br;
    }
 
    gaps.pb(ost);
 
    must += floor(ost/2.0);
 
    string res;
 
    for (auto it:gaps) {
        if (it % 2 == 0) {
            if (b < it/2 || c < it/2) {
                cout<<-1<<endl;
                return 0;
            }
 
            for (int i = 0; i<it/2; i++) res += "BC";
 
            b -= it/2;
            c -= it/2;
        } else {
            if (b < (it-1)/2 && c < (it-1)/2) {
                cout<<-1<<endl;
                return 0;
            }
 
            if ((b >= c || b > must) && b >= (it-1)/2+1) {
                for (int i = 0; i<(it-1)/2; i++) res += "BC";
 
                res += "B";
 
                b -= (it-1)/2+1;
                c -= (it-1)/2;
            } else if (c >= (it-1)/2+1) {
                for (int i = 0; i<(it-1)/2; i++) res += "CB";
 
                res += "C";
 
                b -= (it-1)/2;
                c -= (it-1)/2+1;
            } else {
                cout<<-1<<endl;
                return 0;
            }
        }
 
        res += "A";
        must -= floor(it/2.0);
    }
 
    cout<<res.substr(0, res.size()-1)<<endl;
}