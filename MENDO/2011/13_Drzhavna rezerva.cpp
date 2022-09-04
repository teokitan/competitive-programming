#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,m,cena = 0;
 
    cin>>n>>m;
 
    int niz[m][2];
 
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<2; j++) {
            cin>>niz[i][j];
        }
    }
 
    while (n != 0) {
 
        int najmala = 1001,najmalR = -1;
 
        for (int i = 0; i<m; i++) {
            if (niz[i][0] < najmala) {
                najmala = niz[i][0];
                najmalR = i;
            }
        }
 
        if (niz[najmalR][1] <= n) {
            n-=niz[najmalR][1];
            cena += niz[najmalR][1] * niz[najmalR][0];
        } else {
            cena += niz[najmalR][0] * n;
            n-=n;
        }
 
        niz[najmalR][0] = niz[najmalR][1] = 2000001;
    }
 
    cout<<cena;
    return 0;
}