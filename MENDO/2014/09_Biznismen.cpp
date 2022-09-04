#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    string p,k;
 
    cin>>p>>k;
 
    int ctr = 0;
 
    for (int i = 0; i<4; i++) {
        if (p[i] != k[i]) {
            int a = p[i] - '0';
            int b = k[i] - '0';
 
            if (a < b) {
                ctr += min(b - a, 10-(b-a));
            } else {
                ctr += min(a - b, 10-(a-b));
            }
        }
    }
 
    cout<<ctr;
 
    return 0;
}