#include <iostream>
using namespace std;
 
int main() {
    int r;
    int rezultat = 0;
     
    cin >> r;
 
    for(int i = 1; i<=r; i++) {
        rezultat+=i;
    }
 
    cout<<rezultat;
     
    return 0;
}