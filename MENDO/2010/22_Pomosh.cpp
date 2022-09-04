#include <bits/stdc++.h>
 
typedef long long ll;
 
#define mp make_pair
#define MS(x,y) memset(x, y, sizeof(x))
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,m;
 
    cin>>n>>m;
 
    int l;
 
    cin>>l;
 
    string najevtinaAg;
    int best = INT_MAX;
 
    for (int i = 0; i<l; i++) {
        string str;
        int a,b;
 
        cin>>str>>a>>b;
 
        int vkupno = 0;
 
        int ctr = n;
 
        while (ctr != m) {
            int plusMinus = 0;
 
            if (ctr / 2 < m) {
                vkupno += a* (ctr-m);
                break;
            }
 
            plusMinus = min(b, a*(ctr/2));
            ctr /= 2;
 
            vkupno += plusMinus;
        }
 
        if (vkupno < best) {
            best = vkupno;
            najevtinaAg = str;
        }
    }
 
    cout<<najevtinaAg<<" "<<best;
 
    return 0;
}