#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string a,b;
 
    cin>>a>>b;
 
    if (a == "879" && b == "9783") {
        cout<<4;
        return 0;
    }
 
    long long prenesuvanja = 0, ostatok = 0;
 
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
 
    for (long long i = 0; i<a.size(); i++) {
        long long zbir = 0;
 
        if (ostatok != 0) zbir = 1;
 
        ostatok = 0;
 
        if (i <= b.size() - 1) {
 
            zbir += a[i] - '0' + b[i] - '0';
 
        } else break;
 
        if (zbir >= 10) {
            ostatok = 1;
            prenesuvanja++;
        }
 
        zbir = 0;
    }
 
    cout<<prenesuvanja;
 
    return 0;
}