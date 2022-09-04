#include <bits/stdc++.h>
 
#define pb(x) push_back((x))
#define MS(x,y) memset((x), (y), sizeof(x))
#define ll long long
 
using namespace std;
 
string soberi (string prv, string vtor) {
    string ret = "";
    int n, i;
    int c1, c2, c3, ost = 0;
     if(prv.length()<vtor.length())
        swap(prv, vtor);
 
 
    int raz = prv.length() - vtor.length();
 
    reverse(prv.begin(), prv.end());
    reverse(vtor.begin(), vtor.end());
    for(int i = 0; i <  raz; i++)
        vtor += '0';
 
 
    for(int i = 0; i < prv.length();  i++)
    {
        c1 = prv[i] - '0';
 
        c2 = vtor[i] - '0';
 
        c3 = c1 + c2 + ost;
        if(c3 >= 10)
        {
            ost = 1;
            c3 -= 10;
        }
        else
            ost = 0;
 
        ret += (char)(c3 +'0');
    }
 
 
     if(ost == 1)
         ret += '1';
 
    reverse(ret.begin(), ret.end());
    return(ret);
}
 
int main()
{
 //   fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n;
 
    cin>>n;
 
//    string res[n+5];
//    res[0] = "1";
//
//    for (int i = 1; i<=n; i++) {
//        res[i] = soberi(res[i-1],res[i-1]);
//    }
//
//    string resFin = "0";
//
//    for (int i = 1; i<=n; i++) {
//        resFin = soberi(resFin, res[i]);
//    }
//
//    cout<<resFin<<endl;
 
    string zbir = "2";
    string res = "2";
 
    for (int i = 1; i<n; i++) {
        zbir = soberi(zbir,zbir);
        res = soberi(res, zbir);
    }
 
    cout<<res<<endl;
 
    return 0;
}