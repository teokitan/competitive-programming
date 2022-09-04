#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
long long nzd(long long a, long long b) {
    if (a<b) {
        swap(a,b);
    }
 
    while (b > 0) {
        a = a%b;
        swap(a,b);
    }
 
    return a;
}
 
int main()
{
    double obicna,namalena;
 
    cin>> obicna >> namalena;
 
    long long cena_int = int(obicna*100+0.5);
    long long namalena_int = int(namalena*100+0.5);
 
    long long nzs = cena_int * namalena_int / nzd(cena_int, namalena_int);
 
    long long n = nzs / cena_int;
    long long m = nzs / namalena_int - n;
    cout << "KUPI " << n << " DOBIJ " << m << " GRATIS";
 
    return 0;
}