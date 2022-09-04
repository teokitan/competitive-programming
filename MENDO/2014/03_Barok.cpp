#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int l,w;
 
    cin>>l>>w;
 
    int n;
 
    cin>>n;
 
    queue <pair<int,int>> qu;
 
    int zgradi[l][w];
 
    memset(zgradi, 0, sizeof(zgradi));
 
    int b;
 
    cin>>b;
 
    for (int i = 0; i<b; i++) {
        int a,b;
        cin>>a>>b;
 
        n--;
        zgradi[a-1][b-1] = 1;
 
        qu.push( { a-1, b-1 } );
    }
 
    int res = 0;
 
    int di[] = {1, -1, 0, 0};
    int dj[] = {0, 0, 1, -1};
 
    while (n > 0) {
        res++;
 
        while (!qu.empty()) {
            int i = qu.front().first;
            int j = qu.front().second;
 
            qu.pop();
 
            for(int lm1=0; lm1<4; lm1++){
                int ni = i + di[lm1];
                int nj = j + dj[lm1];
 
                if(ni >= 0 && ni < l && nj >= 0 && nj < w && zgradi[ni][nj] == 0){
                    n--;
                    zgradi[ni][nj] = res + 1;
                }
            }
        }
 
        for (int i = 0; i<l; i++) {
            for (int j = 0; j<w; j++) {
                if (zgradi[i][j] == res+1) qu.push( { i,j } );
            }
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}