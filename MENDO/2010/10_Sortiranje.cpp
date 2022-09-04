#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS memset (a, y, sizeof(a))
#define mn 1000000
 
using namespace std;
 
double vrednost (string str) {
    float res = 0;
    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    for (int i = 0; i<str.length(); i++) {
        char c = str[i];
        int baran = 0;
 
        for (int j = 0; j<26; j++) {
            if (c == alph[j]) {
                baran = j+1;
                break;
            }
        }
 
        res += baran;
    }
 
    res /= str.length();
 
    return res;
}
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin>>n;
 
    map <double, string> zborovi;
 
    for (int i = 0; i<n; i++) {
        string str;
 
        cin>>str;
 
        if (zborovi.count(vrednost(str)) > 0) {
            zborovi[vrednost(str) + 0.0000001] = str;
        } else {
            zborovi[vrednost(str)] = str;
        }
    }
 
    for (auto it = zborovi.begin(); it != zborovi.end(); it++) {
        cout<<it->second<<"\n";
    }
 
 
    return 0;
}