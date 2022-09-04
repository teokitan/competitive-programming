#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
string intToStr (int br) {
    string res = "";
 
    while (br > 0) {
        res += br % 10 + '0';
        br /= 10;
    }
 
    reverse(res.begin(), res.end());
 
    return res;
}
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin>>n;
 
    string res = "pozadina";
 
    int proz[n][4];
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<4; j++) {
            cin>>proz[i][j];
        }
    }
 
    int lr,lc;
 
    cin>>lr>>lc;
 
    lr++;
    lc++;
 
    for (int i = 0; i<n; i++) {
        int red = proz[i][0];
        int kol = proz[i][1];
 
        int sir = proz[i][2] + kol;
        int vis = proz[i][3] + red;
 
        if (red <= lr && kol <= lc && sir >= lc && vis >= lr) {
            if (lr - red == 0 && lc - kol == 0) continue;
            if (lr - red == 1 && lc - kol == 0) continue;
            if (lr - red == 0 && lc - kol == 1) continue;
 
            res = "prozorec " + intToStr(i+1);
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}