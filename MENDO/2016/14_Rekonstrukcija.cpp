#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    vector <int> sosedi[n+1];
    for (int i = 0; i<n-1; i++) {
        int a,b;
        cin>>a>>b;
        sosedi[a].push_back(b);
        sosedi[b].push_back(a);
    }
 
    int reshenie[n+1];
    reshenie[0] = 0;
    reshenie[n] = n;
 
    int poz = 0;
    int id = 0;
    int prethodno = -1;
    while (true) {
        reshenie[id] = poz;
        id++;
        bool sleden = false;
        for (int i = 0; i<sosedi[poz].size(); i++) {
            if (sosedi[poz][i] != prethodno) {
                prethodno = poz;
                poz = sosedi[poz][i];
                sleden = true;
                break;
            }
        }
        if (sleden == false) {
            break;
        }
    }
 
    poz = n;
    id = n;
    prethodno = -1;
 
    while (true) {
        reshenie[id] = poz;
        id--;
        bool sleden = false;
        for (int i = 0; i<sosedi[poz].size(); i++) {
            if (sosedi[poz][i] != prethodno) {
                prethodno = poz;
                poz = sosedi[poz][i];
                sleden = true;
                break;
            }
        }
 
        if (!sleden)
            break;
    }
 
    for (int i = 0; i<=n; i++) {
        cout << reshenie[i] << " ";
    }
    return 0;
}