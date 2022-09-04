#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int l,r,rastecki = 0;
    cin>>l>>r;
 
    for (int i = l; i<=r; i++) {
        int digits[4];
 
        int ctr = 0;
 
        int iKopija = i;
 
        while (iKopija > 0) {
            digits[ctr] = iKopija % 10;
            ctr++;
            iKopija /= 10;
        }
 
        reverse(digits, digits + 4);
 
        if (digits[0] < digits[1] && digits[1] < digits[2] && digits[2] < digits[3]) {
            rastecki++;
        }
    }
 
    cout<<rastecki;
    return 0;
}