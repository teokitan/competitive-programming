#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
struct Segment {
    ll a;
    ll b;
};
 
struct Rect {
    ll x1, y1, x2, y2;
};
 
vector<Rect> rects;
 
ll solve() {
    vector<ll> xs;
 
    for (ll i = 0; i<rects.size(); i++){
        xs.pb(rects[i].x1);
        xs.pb(rects[i].x2);
    }
 
    sort(xs.begin(), xs.end());
 
    auto it = unique(xs.begin(), xs.end());
    xs.resize(distance(xs.begin(), it));
 
    ll res = 0;
 
    for (ll i = 0; i<(ll)xs.size()-1; i++){
        ll x = xs[i];
 
        deque<ll> start, end;
 
        for (ll j = 0; j<rects.size(); j++){
            if (rects[j].x1 <= x && rects[j].x2 > x){
                start.pb(rects[j].y1);
                end.pb(rects[j].y2);
            }
        }
 
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
 
        ll depth = 0;
 
        Segment s;
 
        vector<Segment> segs;
 
        while (!start.empty() || !end.empty()) {
            ll y;
 
            ll predepth = depth;
 
            if (!start.empty() && start.front() <= end.front()) {
                depth++;
 
                y = start.front();
 
                start.pop_front();
            } else {
                depth--;
 
                y = end.front();
 
                end.pop_front();
            }
 
            if (predepth == 0) {
                s.a = y;
            } else if (depth == 0) {
                s.b = y;
                segs.pb(s);
            }
        }
 
        ll wid = xs[i + 1] - x;
 
        for (auto it2:segs) res += wid * (it2.b - it2.a);
    }
 
    return res;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll l,w;
 
    cin>>l>>w;
 
    ll p;
 
    cin>>p;
 
    ll n;
 
    cin>>n;
 
    for (ll i = 0; i<n; i++) {
        ll a,b;
 
        cin>>a>>b;
 
        Rect t;
 
        t.x1 = max((ll)1, b - p);
        t.y1 = max((ll)1, a - p);
 
        t.x2 = min(w+1, b + p + 1);
        t.y2 = min(l+1, a + p + 1);
 
        rects.pb(t);
    }
 
    cout<<solve()<<endl;
 
    return 0;
}