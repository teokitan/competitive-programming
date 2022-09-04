#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000000
 
using namespace std;
 
int lazy[400001];
int tree[400001];
int n,q;
 
int query (int idx, int sR, int eR, int l, int r);
 
int smpl (int n) {
    if (n >= 1) return 1;
    else return 0;
}
 
void update (int idx, int sR, int eR, int l, int r, int val) {
    if (lazy[idx] != 0) {
        tree[idx] = (eR - sR + 1) * smpl(lazy[idx]);
 
        if(sR != eR) {
            lazy[idx*2] = lazy[idx];
            lazy[idx*2+1] = lazy[idx];
        }
 
        lazy[idx] = 0;
    }
 
    if (sR > eR || sR > r || eR < l) return;
 
    if (sR >= l && eR <= r) {
        tree[idx] = (eR - sR + 1) * smpl(val);
 
        if(sR != eR) {
            lazy[idx*2] = val;
            lazy[idx*2+1] = val;
        }
 
        return;
    }
 
    int mid = (sR+eR) / 2;
 
    update(idx*2, sR, mid, l, r, val);
    update(idx*2 + 1, mid + 1, eR, l, r, val);
 
    tree[idx] = tree[idx*2] + tree[idx*2+1];
}
 
int query (int idx, int sR, int eR, int l, int r) {
    if (sR > eR || sR > r || eR < l) return 0;
 
    if (lazy[idx] != 0) {
        tree[idx] = (eR - sR + 1) * smpl(lazy[idx]);
 
        if (sR != eR) {
            lazy[idx*2] = lazy[idx];
            lazy[idx*2+1] = lazy[idx];
        }
 
        lazy[idx] = 0;
    }
 
    if (sR >= l && eR <= r) return tree[idx];
 
    int mid = (sR+eR) / 2;
 
    return query(idx*2, sR, mid, l, r) + query(idx*2 + 1, mid + 1, eR, l, r);
}
 
int main () {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    cin>>n>>q;
 
    for (int i = 0; i<n; i++) {
        int a;
        cin>>a;
        update(1,0,n-1,i,i,a);
    }
 
    for (int i = 0; i<q; i++) {
        char c; int a,b;
 
        cin>>c>>a>>b;
 
        a--; b--;
 
        if (c == '?') cout<<query(1,0,n-1,a,b)<<endl;
        else if (c == '+') update(1,0,n-1,a,b,1);
        else if (c == '-') update(1,0,n-1,a,b,-1);
    }
}