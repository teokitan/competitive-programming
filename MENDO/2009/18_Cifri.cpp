#include <bits/stdc++.h>
 
#define pb push_back
#define MS(x,y) memset((x), (y), sizeof(x))
#define ll long long
 
using namespace std;
 
vector<int> v;
 
void removeN(vector<int>& v, int k)
{
    for (int i = 0; i < v.size() - 1;) {
        if (v[i] < v[i + 1]) {
            v.erase(v.begin() + i);
 
            k--;
 
            if (k == 0) return;
 
            if (i != 0) i = i-1;
            else i = 0;
        } else i++;
    }
 
    v.resize(v.size() - k);
}
 
void string_to_vInt(string s){
    for (int i = 0; i<s.length(); i++) {
        v.pb(s[i] - '0');
    }
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string s;
 
    cin>>s;
 
    string_to_vInt(s);
 
    ll k;
 
    cin>>k;
 
    removeN(v, k);
 
    for (ll i = 0; i<v.size(); i++) {
        cout<<v[i];
    }
 
    return 0;
}