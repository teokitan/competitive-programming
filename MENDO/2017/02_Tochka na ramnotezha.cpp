#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int niza[n];
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
    }
 
 
    int levo[n],desno[n];
 
 
    levo[0] = 0;
    for (int i=1; i<n; i++) {
        levo[i] = levo[i-1] + niza[i-1];
    }
 
    desno[n-1] = 0;
    for (int i=n-2; i>=0; i--) {
        desno[i] = desno[i+1] + niza[i+1];
    }
 
 
    int res=-1;
 
    for (int i = 0; i<n; i++) {
        if (levo[i] == desno[i]) {
            res = i+1;
            break;
        }
    }
 
    cout << res << endl;
    return 0;
}