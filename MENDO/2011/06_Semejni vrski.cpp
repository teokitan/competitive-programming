#include <bits/stdc++.h>
 
using namespace std;
 
int stringtoint(string str) {
    int res = 0;
 
    for (int i = 0; i<str.size(); i++) {
        res += str[i] - '0';
        res*=10;
    }
 
    res /= 10;
 
    return res;
}
 
int main()
{
    string br;
 
    cin>>br;
 
    string br2 = br;
 
    reverse (br2.begin(), br2.end());
 
    int res = stringtoint(br) + stringtoint(br2);
 
    cout<<res;
 
    return 0;
}