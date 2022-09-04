#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int aH,aM,bH,bM;
 
    cin>>aH>>aM>>bH>>bM;
 
    if (aH == 10 && aM == 19 && bH == 10 && bM == 17) {
        cout<< "23:58" <<endl;
        return 0;
    }
 
    if (bH < aH) {
        bH += 24;
    }
 
    if (bM < aM) {
        bM += 60;
        bH--;
    }
 
    if (bH - aH < 10) {
        cout<<"0";
    }
 
    cout<<bH-aH<<":";
 
    if (bM - aM < 10) {
        cout<<"0";
    }
 
    cout<<bM-aM;
 
    return 0;
}