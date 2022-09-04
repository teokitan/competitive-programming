#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
ll tree[400005];
 
void update (ll pos, ll value, ll interval_index, ll interval_left, ll interval_right) {
    if (interval_left > pos || interval_right < pos || interval_left > interval_right) return;
 
    if (interval_left == interval_right) {
        if (interval_left == pos) tree[interval_index] += value;
 
        return;
    }
 
    ll mid = (interval_left + interval_right) / 2;
    update(pos, value, 2*interval_index, interval_left, mid);
    update(pos, value, 2*interval_index+1, mid+1, interval_right);
 
    tree[interval_index] = tree[2*interval_index] + tree[2*interval_index+1];
}
 
ll query (ll from, ll to, ll interval_index, ll interval_left, ll interval_right) {
    if (interval_left > to || interval_right < from || interval_left > interval_right) return 0;
 
    if (from <= interval_left && interval_right <= to) return tree[interval_index];
 
    ll mid = (interval_left + interval_right) / 2;
 
    return query(from, to, 2*interval_index, interval_left, mid) + query(from, to, 2*interval_index+1, mid+1, interval_right);
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll n;
 
    cin>>n;
 
    pair<ll,ll> niza2[n+1];
 
    niza2[0] = {INT_MAX, INT_MAX};
 
    for (ll i = 1; i<=n; i++) {
        cin>>niza2[i].first;
        niza2[i].second = i;
    }
 
    sort(niza2, niza2+(n+1));
    reverse(niza2, niza2+(n+1));
 
    ll niza[n+1];
 
    for (ll i = 1; i<=n; i++) niza[i] = niza2[i].second;
 
    ll dp[n+1][4];
 
    MS(dp, 0);
 
    for (ll i = 1; i<=n; i++) dp[i][1] = 1;
 
    for (ll p = 2; p<=3; p++) {
        MS(tree, 0);
 
        for (ll i = 2; i<=n; i++) {
            update(niza[i-1]-1, dp[i-1][p-1], 1, 0, n-1);
 
            dp[i][p] += query(0, niza[i]-2, 1, 0, n-1);
        }
    }
 
    ll res = 0;
 
    for (ll i = 1; i<=n; i++) res += dp[i][3];
 
    cout<<res<<endl;
 
    return 0;
}