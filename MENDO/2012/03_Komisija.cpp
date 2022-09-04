#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,k,xWays = 0,najgolem = -1;
 
    cin>>n>>k;
 
    int zad[n];
 
    for (int i = 0; i<n; i++) {
        cin>>zad[i];
    }
 
    for (int i = 0; i<n; i++) {
        if (zad[i] > najgolem) {
            najgolem = zad[i];
        }
    }
 
    for (int i = 1; i<najgolem; i++) {
        int pogolemi = 0;
 
        for (int j = 0; j<n; j++) {
            if (zad[j] >= i) {
                pogolemi++;
            }
        }
 
        if (pogolemi == k) {
            xWays++;
        }
    }
 
    cout<<xWays;
 
    return 0;
}