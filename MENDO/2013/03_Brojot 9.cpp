#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, a=0, b, c;
    long long suma=0;
    string broj;
 
    cin >> broj;
 
    for(int i=0;i<broj.size();i++){
        suma+=broj[i]-48;
    }
 
    if(suma%9==0)
        cout << 0 << endl;
    else if(suma%3==0)
        cout << 2 << endl;
    else
        cout << 8 << endl;
 
    return 0;
}