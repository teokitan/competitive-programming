#include <iostream>
 
using namespace std;
 
int clenovi,ciklusi;
int zadaci[20];
int res = 100000;
 
void reshenie (int ciklus, int clen, int cl_suma, int max_suma) {
    if (ciklus == ciklusi) {
        res = min(res, max_suma);
        return;
    }
 
    int nova_max = max(max_suma, cl_suma + zadaci[ciklus]);
 
    reshenie(ciklus + 1, clen, cl_suma+zadaci[ciklus], nova_max);
 
    if (clen < clenovi) {
        reshenie(ciklus, clen+1, 0, max_suma);
    }
}
 
int main()
{
    cin>>clenovi >> ciklusi;
 
    for (int  i = 0; i<ciklusi; i++) {
        cin>>zadaci[i];
    }
 
    reshenie(0,1,0,0);
 
    cout<<res;
    return 0;
}