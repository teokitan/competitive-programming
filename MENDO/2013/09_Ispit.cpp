#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int calculate (int n, int m) {
    bool vis[n][m];
 
    MS(vis, 0);
 
    int res = 0;
    int ctr = 0;
    int i = n-1;
    int j = 0;
 
    /**   Ctr 0 - odi nagore
          Ctr 1 - odi desno
          Ctr 2 - odi dolu
          Ctr 3 - odi levo
          Ctr 4 - stavi go ctr na 0   **/
 
    while (true)
    {
        bool check = true;
 
        for (int lm1 = 0; lm1<n; lm1++)
        {
            for (int lm2 = 0; lm2<m; lm2++)
            {
                if (!vis[lm1][lm2]) check = false;
            }
        }
 
        if (check) break;
 
        vis[i][j] = true;
 
        if (ctr == 0 && ( i == 0 || vis[i-1][j]) )
        {
            ctr = 1;
            res++;
        }
        else if (ctr == 1 && ( j == m-1 || vis[i][j+1]) )
        {
            ctr = 2;
            res++;
        }
        else if (ctr == 2 && ( i == n-1 || vis[i+1][j]) )
        {
            ctr = 3;
            res++;
        }
        else if (ctr == 3 && ( j == 0 || vis[i][j-1]) )
        {
            ctr = 0;
            res++;
        }
 
 
        if (ctr == 0)
        {
            i--;
        }
        else if (ctr == 1)
        {
            j++;
        }
        else if (ctr == 2)
        {
            i++;
        }
        else if (ctr == 3 )
        {
            j--;
        }
 
        if(ctr == 4) ctr = 3;
    }
 
    return res-1;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n,m;
 
    cin>>n>>m;
 
   // if (n > m) swap(n,m);
 
   // vector<pair<int,int>> rec;
 
    int res = 0;
 
    while (n > 1 || m > 1) {
        if (n < 1 || m < 1) break;
 
   //     rec.pb({n, m});
 
        if (n > 30 && m > 30) res += 4;
        else {
            res += calculate(n,m);
            break;
        }
 
        n -= 2;
        m -= 2;
    }
 
    cout<<res<<endl;
 
    return 0;
}