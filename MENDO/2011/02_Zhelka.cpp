#include <iostream>
#include <bits/stdc++.h>
  
using namespace std;
  
int main() {
    int h,u,d, denovi = 0, pominato = 0;
  
    cin>>h>>u>>d;
  
    for (denovi = 0; pominato < h; denovi++) {
        pominato += u;
  
        if (pominato >= h) {
            break;
        } else {
            pominato -= d;
        }
    }
  
    cout<<denovi+1;
  
    return 0;
}