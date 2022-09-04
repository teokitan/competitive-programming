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
 
    int niza[n][3];
 
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<3; j++) {
            cin>>niza[i][j];
        }
    }
 
    queue<int> qI,qB,qC,qP;
 
    qI.push(0);
    qI.push(0);
    qI.push(0);
 
    qB.push(0);
    qB.push(1);
    qB.push(2);
 
    qC.push(niza[0][0]);
    qC.push(niza[0][1]);
    qC.push(niza[0][2]);
 
    qP.push(0);
    qP.push(1);
    qP.push(2);
 
    int res = INT_MAX;
 
    while (!qI.empty()) {
        int i = qI.front(), b = qB.front(), c = qC.front(), prv = qP.front();
 
        qI.pop(); qB.pop(); qC.pop(); qP.pop();
 
        if (i == n-1) {
            if (prv != b) res = min(res, c);
 
            continue;
        }
 
        if (b == 0) {
            qI.push(i+1);
            qB.push(1);
            qC.push(c+niza[i+1][1]);
            qP.push(prv);
 
            qI.push(i+1);
            qB.push(2);
            qC.push(c+niza[i+1][2]);
            qP.push(prv);
        } else if (b == 1) {
            qI.push(i+1);
            qB.push(0);
            qC.push(c+niza[i+1][0]);
            qP.push(prv);
 
            qI.push(i+1);
            qB.push(2);
            qC.push(c+niza[i+1][2]);
            qP.push(prv);
        } else if (b == 2) {
            qI.push(i+1);
            qB.push(0);
            qC.push(c+niza[i+1][0]);
            qP.push(prv);
 
            qI.push(i+1);
            qB.push(1);
            qC.push(c+niza[i+1][1]);
            qP.push(prv);
        }
    }
 
    cout<<res<<endl;
 
    return 0;
}