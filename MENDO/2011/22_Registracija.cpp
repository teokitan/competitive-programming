#include <bits/stdc++.h>
 
typedef long long ll;
 
#define MS(x,y) memset((x), (y), sizeof((x)))
#define pb push_back
#define MN 1000000000
 
using namespace std;
 
bool cust(string a, string b) {
    string str;
    int br = 0;
 
    for (auto it:a) {
        if (!isdigit(it)) str += it;
        else {
            br *= 10;
            br += it - '0';
        }
    }
 
    string str2;
    int br2 = 0;
 
    for (auto it:b) {
        if (!isdigit(it)) str2 += it;
        else {
            br2 *= 10;
            br2 += it - '0';
        }
    }
 
    if (str != str2) return str<str2;
    else return br<br2;
}
 
int main() {
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string wanted;
 
    cin>>wanted;
 
    int n;
 
    cin>>n;
 
    vector<string> niza(n);
 
    for (int i = 0; i<n; i++) cin>>niza[i];
 
    sort(niza.begin(), niza.end(),cust);
 
    map<string,int> sleden;
 
    for (int i = 0; i<n; i++) {
        string str;
        int br = 0;
 
        for (auto it:niza[i]) {
            if (!isdigit(it)) str += it;
            else {
                br *= 10;
                br += it - '0';
            }
        }
 
        if (sleden[str] == br) sleden[str] = br+1;
    }
 
    if (sleden[wanted] == 0) cout<<wanted;
    else cout<<wanted<<sleden[wanted];
}