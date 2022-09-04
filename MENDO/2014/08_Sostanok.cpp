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
 
    int n;
 
    cin>>n;
 
    int niza[n][4];
 
    for (int i = 0; i<n; i++) {
        cin>>niza[i][0]>>niza[i][1];
 
        niza[i][2] = i;
        niza[i][3] = 1;
    }
 
    for (int i = n-1; i>=0; i--) {
        int res = -1;
 
        for(int j = i+1; j<n; j++) {
            if (niza[i][0] + niza[i][1] >= niza[j][0]) {
                niza[i][2] = j;
                niza[i][3]++;
                res = max(res, niza[j][2]);
            } else break;
        }
 
        if(res != -1){
            niza[i][3] += res-niza[i][2];
            niza[i][2] = res;
        }
    }
 
 
    //Cout
 
    for (int i = 0; i<n; i++) {
        cout<<niza[i][3]<<endl;
    }
 
    return 0;
}