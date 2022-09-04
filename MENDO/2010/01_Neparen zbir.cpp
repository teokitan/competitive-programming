#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    int a,b,res = 0;
 
    cin>>a>>b;
 
    for (int i = a; i<= b; i++) {
        if (i%2 == 1) res += i;
    }
 
    cout<<res<<endl;
 
    return 0;
}