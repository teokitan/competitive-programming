#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int k;
    int oceni[4];
 
    cin>>k;
 
    for (int i = 0; i<4; i++) {
        cin>>oceni[i];
    }
 
    for (int i = 1; i<=100; i++) {
        int zbir = i;
 
        for (int j = 0; j<4; j++) {
            zbir += oceni[j];
        }
 
        zbir /= 5;
 
        switch (k) {
            case 2 :
                if (zbir >= 60) {
                    cout<<i;
                    return 0;
                }
                break;
            case 3 :
                if (zbir >= 70) {
                    cout<<i;
                    return 0;
                }
                break;
            case 4 :
                if (zbir >= 80) {
                    cout<<i;
                    return 0;
                }
                break;
            case 5 :
                if (zbir >= 90) {
                    cout<<i;
                    return 0;
                }
                break;
            default :
                break;
        }
    }
 
    cout<<"GRESHKA";
 
    return 0;
}