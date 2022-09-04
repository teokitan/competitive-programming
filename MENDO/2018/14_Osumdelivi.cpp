#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int dp[200001][8];
int n;
string str;
const int modul = 1000000007;
 
int f(int i, int rem) {
    if (dp[i][rem] != -1) return dp[i][rem];
 
    int res = 0;
 
    if (i == n) {
        if (rem == 0) res++;
 
        return dp[i][rem] = res%modul;
    }
 
    res += f(i+1,rem);
 
    int nRem = ((rem*10)+(str[i]-'0'))%8;
    res += f(i+1,nRem);
 
    return dp[i][rem] = res%modul;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>n;
 
    cin>>str;
 
    for (int i = 0; i<200001; i++) {
        for (int j = 0; j<8; j++) {
            dp[i][j] = -1;
        }
    }
 
    cout<<(f(0,0)-1)%modul<<endl;
 
    return 0;
}