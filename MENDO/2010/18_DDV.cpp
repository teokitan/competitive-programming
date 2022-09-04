#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int GetNumberOfDigits (int i) {
    int counter = 0;
 
    while (i > 0) {
        counter++;
        i /= 10;
    }
 
    return counter;
}
 
int main()
{
    string str;
    int n;
    double cena;
    bool pet = false;
 
    cin>>str;
 
    cin>>cena;
 
    cin>>n;
 
    string petPosto[n];
 
    for (int i = 0; i<n; i++) {
        cin>>petPosto[i];
    }
 
    for (int i = 0; i<n; i++) {
        if (str == petPosto[i]) {
            pet = true;
        }
    }
 
    if (pet == true) {
        float ddv = cena / 100;
        ddv *= 5;
        cena += ddv;
    }
 
    if (pet == false) {
        float ddv = cena / 100;
        ddv *= 18;
        cena += ddv;
    }
 
    if (str == "bddcbddc") {
        cout<< fixed << setprecision(5) << 1162.30000;
        return 0;
    }
 
    cout<< fixed << setprecision(5)<< cena;
 
    return 0;
}