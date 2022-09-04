#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
 
    cin>>n;
 
    pair <int,int> niz[n];
 
    for (int i = 0; i<n; i++) {
        cin>>niz[i].second >> niz[i].first;
    }
 
    sort(niz, niz+n);
 
    for (int i = 0; i<n; i++) {
        if (niz[i].first == niz[i+1].first && niz[i].second == niz[i+1].second) {
            niz[i].first = 0;
            niz[i].second = 0;
        }
    }
 
    int meseci[13];
 
    memset(meseci, 0, sizeof(meseci));
 
    for (int i = 0; i<n; i++) {
        meseci[niz[i].first] += 1;
    }
 
    int najgolem = 0;
 
    for (int i = 1; i<13; i++) {
        if (meseci[i] >= najgolem) {
            najgolem = meseci[i];
        }
    }
 
    for (int i = 1; i<13; i++) {
        if (meseci[i] == najgolem) {
            cout<<i<<"\n";
        }
    }
 
    return 0;
}