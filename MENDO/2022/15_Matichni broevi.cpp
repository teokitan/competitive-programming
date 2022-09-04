#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000001
  
using namespace std;
  
ll mypow(ll a, ll b) {
    ll res = 1;
  
    for (ll i = 0; i<b; i++) res *= a;
  
    return res;
}
  
ll palindromiSoDolz (ll n) {
    ll res = mypow(10,(n-1)/2);
    res *= 10;
  
    return res;
}
  
ll nePalindromiSoDolz (ll n) {
    ll res = mypow(10,n)-palindromiSoDolz(n);
  
    return res;
}
  
bool daliPalindrom (string str) {
    string str2 = str;
    reverse(str2.begin(),str2.end());
  
    return (str == str2);
}
  
bool daliMozePalindrom (string pref, int dolz) {
    int br = pref.length();
  
    for (int i = 0; i<br; i++) {
        int obr = dolz-i-1;
  
        if (obr < br) {
            if (pref[i] != pref[obr]) return false;
        }
    }
  
    return true;
}
  
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    ll n,p;
    cin>>n>>p;
  
    if (p == 0) {
        cout<<nePalindromiSoDolz(n)<<endl;
  
        return 0;
    }
  
    set<string> pref;
  
    for (int i = 0; i<p; i++) {
        string a;
        cin>>a;
        pref.insert(a);
    }
  
    set<string> bris;
  
    for (auto it:pref) {
        int a = it.length();
  
        for (auto it2:pref) {
            if (it == it2) continue;
  
            int b = it2.length();
  
            if (it2.substr(0,a) == it) bris.insert(it2);
        }
    }
  
    for (auto it:bris) pref.erase(it);
  
    ll res = nePalindromiSoDolz(n);
  
    for (auto it:pref) {
        int a = it.length();
  
        res -= mypow(10,n-a);
  
        a = n-(a*2);
  
        if (a > 0) res += palindromiSoDolz(a);
        else if (a == 0) res ++;
        else res += daliMozePalindrom(it,n);
    }
  
    cout<<max(res,(ll)0)<<endl;
}