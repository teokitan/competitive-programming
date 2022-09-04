#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
 
using namespace std;
 
int a,b,c,pari;
int last[10001];
int rA = 0, rB = 0, rC = 0;
 
void rec(int pos) {
    if (pos == 0) return;
 
    int posl = last[pos];
 
    if (posl == 1) { rec(pos-a); rA++; }
    if (posl == 2) { rec(pos-b); rB++; }
    if (posl == 3) { rec(pos-c); rC++; }
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>a>>b>>c>>pari;
 
    MS(last,-1);
    last[0] = 0;
 
    for (int i = 1; i<=pari; i++) {
        if (i-a >= 0 && last[i-a] != -1) last[i] = 1;
        if (i-b >= 0 && last[i-b] != -1) last[i] = 2;
        if (i-c >= 0 && last[i-c] != -1) last[i] = 3;
    }
 
    for (int i = pari; i>=0; i--) {
        if (last[i] != -1) {
            rec(i);
            cout<<pari-i<<endl;
            cout<<rA<<" "<<rB<<" "<<rC<<endl;
 
            return 0;
        }
    }
}