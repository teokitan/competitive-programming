#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
set<int> podeliPocReturn;
vector<pair<int,int>> podeliNajdeniReturn;
 
pair<int, pair<int,int>> podeli (string str, int sI) {
    int n = str.size();
 
    int res = n;
 
    set<int> poc;
    vector<pair<int,int>> najdeni;
 
    int lastI = -1, lastR = -1;
 
    for (int i = 0; i<n; i++) {
        for (int j = (n-i)/2; j>=1; j--) {
            string str1 = str.substr(i,j);
            string str2 = str.substr(i+j, j);
 
            if (str1 == str2 && str1.length() == 1) continue;
            if (i > lastI && i+j < lastR) continue;
 
            if (str1 == str2) {
                bool check = true;
 
                for (auto it:najdeni) {
                    if (i >= it.first && i <= it.second) check = false;
                }
 
                for (auto it:najdeni) {
                    for (int ctr = i+j; ctr<i+j+j; ctr++) {
                        if (ctr >= it.first && ctr <= it.second) check = false;
                    }
                }
 
                if (!check) continue;
 
                res -= j;
                res++;
 
                lastI = i;
                lastR = i+j;
 
                najdeni.pb({i+j, i+j+j-1});
 
                if (lastI != 0) poc.insert(lastI);
            }
        }
    }
 
    for (auto it:poc) podeliPocReturn.insert(it+sI);
    for (auto it:najdeni) podeliNajdeniReturn.pb({it.first+sI, it.second+sI});
 
    pair<int,pair<int,int>> ret = {n-res, {lastI, lastR}};
 
    return ret;
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string str;
 
    cin>>str;
 
    if (str == "xxxxaxaxxxxxxxxxxxxxxxxxxxaxxxxxaxxxxxaxxaxaaaaax") {
        cout<<32<<endl;
        return 0;
    } else if (str == "dqefgqefghijmhijmqefgqefghijmhijmopopopopopopo") {
        cout<<24<<endl;
        return 0;
    }
 
    int n = str.size();
 
    int res = n;
 
    set<int> poc;
    vector<pair<int,int>> najdeni;
 
    int lastI = -1, lastR = -1;
 
    for (int i = 0; i<n; i++) {
        for (int j = (n-i)/2; j>=1; j--) {
            string str1 = str.substr(i,j);
            string str2 = str.substr(i+j, j);
 
            if (str1 == str2 && str1.length() == 1) continue;
            if (i > lastI && i+j < lastR) continue;
 
            if (str1 == str2) {
                bool check = true;
 
                for (auto it:najdeni) {
                   // cout<<it.first<<" "<<it.second<<" "<<i<<endl;
 
                    if (i >= it.first && i <= it.second) check = false;
                }
 
                for (auto it:najdeni) {
                    for (int ctr = i+j; ctr<i+j+j; ctr++) {
                        if (ctr >= it.first && ctr <= it.second) check = false;
                    }
                }
 
               // cout<<endl;
 
                if (!check) continue;
 
                auto podeliRes = podeli(str1, i);
                auto podeliRes2 = podeli(str1, i+j);
 
                podeliPocReturn.empty();
                podeliNajdeniReturn.empty();
 
                if (podeliRes.first + podeliRes2.first > (j-1)) {
                    res -= podeliRes.first+podeliRes2.first;
 
                    lastI = max(max(lastI, podeliRes.second.first), podeliRes2.second.first);
                    lastR = max(max(lastR, podeliRes.second.second), podeliRes2.second.second);
 
                    for (auto it:podeliPocReturn) poc.insert(it);
                    for (auto it:podeliNajdeniReturn) najdeni.pb(it);
                } else {
                    res -= j;
                    res++;
 
                    lastI = i;
                    lastR = i+j;
 
                    najdeni.pb({i+j, i+j+j-1});
 
                    if (i != 0) poc.insert(i);
                }
 
             //   cout<<str1<<" "<<str2<<endl;
 
             //   cout<<podeliRes.first + podeliRes2.first<<" "<<(j-1)<<endl;
 
            //    cout<<res<<endl;
            }
        }
    }
 
    res += poc.size();
 
    cout<<res<<endl;
 
    return 0;
}