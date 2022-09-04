#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
 
    cin>>n;
 
    int niza[n];
 
    priority_queue <int> najgolemi;
 
    int najgolemBr = 0;
 
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
 
        if (niza[i] == 1) {
            najgolemBr++;
        } else {
            najgolemi.push(najgolemBr);
            najgolemBr = 0;
        }
    }
 
    if (niza[n-1] == 1) {
        najgolemi.push(najgolemBr);
    }
 
    cout<<najgolemi.top();
 
    return 0;
}