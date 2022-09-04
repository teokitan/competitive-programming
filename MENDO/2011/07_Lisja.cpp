#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int najmnogu = -1, najmnoguDen = -1;
 
    int niza[30];
 
    for (int i = 0; i<30; i++) {
        int a;
 
        cin>>a>>niza[i];
 
        if (niza[i] > najmnogu) {
            najmnogu = niza[i];
            najmnoguDen = a;
        }
    }
 
    cout<<najmnoguDen<<" noemvri"<<endl;
 
    return 0;
}