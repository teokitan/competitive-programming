#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000002
#define pb push_back
  
using namespace std;
  
int main()
{
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n;
    cin>>n;
  
    ll niza[n];
    for (ll i = 0; i<n; i++) cin>>niza[i];
  
    ll right = n-1;
    ll res = 0;
  
    for (ll i = 0; i<n; i++) {
        ll ovoj = niza[i];
        ll obr = niza[right];
  
        if (i >= right) {
            break;
        }
  
        while(ovoj != obr) {
            if (ovoj < obr) {
                ovoj += niza[i+1];
                i++;
                res++;
            } else {
                obr += niza[right-1];
                right--;
                res++;
            }
  
            if (i >= right) {
                break;
            }
        }
  
        right--;
    }
  
    cout<<res<<endl;
}