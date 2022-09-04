#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
   int niz[3], skokovi;
 
   for (int i = 0; i<3; i++) {
    cin>>niz[i];
   }
 
   skokovi = max(niz[1] - niz[0] - 1, niz[2] - niz[1] - 1);
 
   cout << skokovi << endl;
 
   return 0;
}