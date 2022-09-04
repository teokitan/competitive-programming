#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int poeni[3][2],pogolem = 0, pogolemIn = -1;
 
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<2; j++) {
            cin>>poeni[i][j];
        }
    }
 
    int ana = 0, stefan = 0;
 
    for (int i = 0; i<3; i++) {
        if (poeni[i][0] > pogolem) {
            pogolem = poeni[i][0];
            pogolemIn = 0;
        }
 
        if (poeni[i][1] > pogolem) {
            pogolem = poeni[i][1];
            pogolemIn = 1;
        }
 
        int zbir = 0;
 
        zbir += poeni[i][0] % 10;
        zbir += poeni[i][0] / 10 % 10;
        zbir += poeni[i][0] / 100 % 10;
 
        if (poeni[i][0] % zbir == 0) {
            stefan += 2;
            ana -= 1;
        }
 
        int zbir2 = 0;
 
        zbir2 += poeni[i][1] % 10;
        zbir2 += poeni[i][1] / 10 % 10;
        zbir2 += poeni[i][1] / 100 % 10;
 
        if (poeni[i][1] % zbir2 == 0) {
            ana += 2;
            stefan -= 1;
        }
    }
 
    bool isti = false;
 
    if (stefan == ana) {
        isti = true;
    }
 
    cout<< stefan << " " << ana << endl;
 
    if (!isti) {
        if (ana > stefan) {
            cout<< "Ana";
        } else {
            cout<< "Stefan";
        }
    } else {
        if (pogolemIn == 0) {
            cout<< "Stefan";
        } else {
            cout<< "Ana";
        }
    }
 
    return 0;
}