#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str,res;
    cin>>str;
 
    int broj = 0;
 
    for (int i = 0; i<str.length(); i++) {
        if (isdigit(str[i])) {
            broj = str[i] - '0';
            continue;
        }
 
        if (broj != 0) {
            for (int j = 0; j<broj; j++) {
                res += str[i];
            }
            broj = 0;
        } else {
            res += str[i];
        }
    }
 
    cout<<res;
    return 0;
}