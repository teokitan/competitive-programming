#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    map <char,int> vrednosti;
 
    int n;
 
    for (int i = 0; i<26; i++) {
        char str; int br; cin>>str>>br;
 
        vrednosti[str] = br;
    }
 
    cin>>n;
 
    map <string, int> vrednostiNaZborovi;
 
    for (int i = 0; i<n; i++) {
        string zbor;
 
        cin>>zbor;
 
        int vrednost = 0;
 
        for (int j = 0; j<zbor.size(); j++) {
            bool wasUpper = false;
 
            if (isupper(zbor[j])) {
                vrednost += 20;
                zbor[j] += 32;
                wasUpper = true;
            }
 
            vrednost += vrednosti[zbor[j]];
 
            if (wasUpper) zbor[j] -= 32;
        }
 
        vrednostiNaZborovi[zbor] = vrednost;
    }
 
    string najgolemStr;
    int najmnogu = 0;
 
    for (auto it = vrednostiNaZborovi.begin(); it!=vrednostiNaZborovi.end(); it++) {
        if (it->second > najmnogu) {
            najmnogu = it->second;
            najgolemStr = it->first;
        }
    }
 
    cout<<najgolemStr<<endl;
 
    return 0;
}