#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
 
    cin>>n;
 
    string arr[n];
 
    for (int i = 0; i<n; i++) {
        cin>>arr[i];
    }
 
    multiset <string> setString;
 
    for (int i = 0; i<n; i++) {
        setString.insert(arr[i]);
    }
 
    int najmnogu = 0;
    string najmnoguStr = "";
 
    for (int i = 0; i<n; i++) {
        int br = setString.count(arr[i]);
 
        if (br > najmnogu) {
            najmnogu = br;
            najmnoguStr = arr[i];
        }
    }
 
    cout<<najmnoguStr;
 
    return 0;
}