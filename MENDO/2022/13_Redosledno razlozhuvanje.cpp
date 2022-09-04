#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x),(y), sizeof((x)))
#define MN 1000000001
#define pb push_back
  
using namespace std;
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif // LOCAL_DEBUG
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n;
    cin>>n;
  
    vector<pair<ll,ll>> resVec;
  
    for (ll i = 0; i<n; i++) {
        ll br;
        cin>>br;
  
        ll res = 0;
  
        unordered_set<int> resS;
  
        for (ll ctr = 1; ctr<=sqrt(br)*2; ctr++) {
            ll prv = ctr;
            ll vtor = br/prv;
            ll rem = (br%prv);
  
            ll oldRes = res;
  
            if (rem == 0 && prv%2 == 1 && vtor >= double(prv)/2) resS.insert(prv);
            else if (rem == prv/2 && prv%2 == 0 && vtor >= double(prv)/2) resS.insert(prv);
  
            if (prv == vtor) continue;
  
            swap(prv,vtor);
  
            oldRes = res;
  
            if (rem == 0 && prv%2 == 1 && vtor >= double(prv)/2) resS.insert(prv);
            else if (rem == prv/2 && prv%2 == 0 && vtor >= double(prv)/2) resS.insert(prv);
        }
  
  
        res = resS.size();
  
        resVec.pb({res,-br});
    }
  
    sort(resVec.rbegin(), resVec.rend());
  
    cout<<-resVec[0].second<<" "<<resVec[0].first<<endl;
}