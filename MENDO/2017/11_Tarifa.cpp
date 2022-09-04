#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
bool prosti[1000000];
 
void generiraj_prosti() {
    vector <int> p;
    for (int i = 2; i<1000000; i++) {
        bool prost = true;
 
        for (int j = 0; j<p.size() && p[j]*p[j]<=i; j++) {
            if (i % p[j] == 0) {
                prost = false;
                break;
            }
        }
 
        prosti[i] = prost;
 
        if (prost) p.push_back(i);
    }
 
    return;
}
 
int main()
{
    string s;
    cin>>s;
    memset(prosti, false, sizeof(prosti));
    generiraj_prosti();
    set <int> res;
 
    for (int i = 0; i<s.size(); i++) {
        int broj = 0;
 
        for (int dolzina = 0; dolzina < 6; dolzina++) {
            if (i + dolzina < s.size()) {
                broj *= 10;
                broj += s[i+dolzina] - '0';
                if (prosti[broj] == true) {
                    res.insert(broj);
                }
            }
        }
    }
 
    cout<<res.size();
 
    return 0;
}