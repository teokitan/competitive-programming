#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
 
    int niz[10];
 
    for (int i = 0; i<10; i++) {
        cin>>niz[i];
        niz[i] = niz[i] % 42;
    }
 
    set <int> sniz (niz, niz + 10);
    cout<<sniz.size();
 
    return 0;
}