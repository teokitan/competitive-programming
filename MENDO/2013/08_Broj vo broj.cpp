#include <bits/stdc++.h>
 
using namespace std;
 
string inttostring (int br) {
    string res;
 
    while (br > 0) {
        res += br % 10 + '0';
        br /= 10;
    }
 
    reverse(res.begin(), res.end());
 
    return res;
}
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int s,k, res = 0;
 
    cin>>s>>k;
 
    string x;
 
    cin>>x;
 
    for (int i = s; i<=k; i++) {
        string istring = inttostring(i);
 
        size_t pos = istring.find(x);
 
        if (pos <= istring.size()) res++;
    }
 
    cout<<res;
 
    return 0;
}