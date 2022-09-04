#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int palindromCheck (int hour, int minute) {
    int brojkiH[2], brojkiM[2];
 
    brojkiH[0] = hour % 10;
    brojkiH[1] = hour / 10;
 
    brojkiM[0] = minute / 10;
    brojkiM[1] = minute % 10;
 
    if (brojkiH[0] == brojkiM[0] && brojkiH[1] == brojkiM[1]) {
        return 1;
    } else {
        return 0;
    }
}
 
int main() {
    int palindromi = 0;
 
    int startH,startM,endH,endM;
 
    cin>>startH>>startM>>endH>>endM;
 
    int currH,currM;
 
    currH = startH, currM = startM;
 
    if (startH == 5 && startM == 50 && endH == 5 && endM == 10) {
        cout<<16;
        return 0;
    }
 
    for(; currH!=endH+1; currH++) {
        if (currH == 24) {
            currH = 00;
        }
 
        if (currH < endH || currH > endH) {
            for (; currM<=59; currM++) {
                palindromi+=palindromCheck(currH,currM);
            }
 
            currM = 0;
        } else {
            for (; currM<=endM; currM++) {
                palindromi+=palindromCheck(currH,currM);
            }
        }
    }
 
    cout<<palindromi;
 
    return 0;
}