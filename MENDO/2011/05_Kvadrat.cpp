#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
 
    cin>>n;
 
    int niz[n][n];
 
    bool voPrv = false;
    int redNepoznat = 0;
 
    for (int i=0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cin>>niz[i][j];
 
            if (i == 0 && niz[i][j] == -1) voPrv = true;
            if (niz[i][j] == -1) redNepoznat = i;
        }
    }
 
    int bezNego = 0;
    int soNego = 0;
 
    if (!voPrv) {
        for (int i = 0; i<n; i++) {
            bezNego += niz[0][i];
        }
    } else {
        for (int i = 0; i<n; i++) {
            bezNego += niz[1][i];
        }
    }
 
    for (int i = 0; i<n; i++) {
        soNego += niz[redNepoznat][i];
    }
 
    soNego++;
 
    cout<<bezNego - soNego;
 
    return 0;
}