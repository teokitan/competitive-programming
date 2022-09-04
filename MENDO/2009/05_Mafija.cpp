#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n;
 
    cin>>n;
 
    int niz[n],zbir = 0,novi[n],najmal = 1001,najmalPozicija = -1;
 
    float arSredina;
 
    for (int i = 0; i<n; i++) {
        cin>>niz[i];
        novi[i] = niz[i];
        zbir += niz[i];
    }
 
    arSredina = zbir/n;
 
    for (int i = 0; i<n; i++) {
        novi[i] -= arSredina;
        novi[i] = abs(novi[i]);
 
        if (novi[i] < najmal) {
            najmal = novi[i];
            najmalPozicija = i;
        }
    }
 
    cout<<niz[najmalPozicija];
 
    return 0;
}