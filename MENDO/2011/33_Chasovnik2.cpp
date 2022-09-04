#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int h1,m1,h2,m2;
 
    cin>>h1>>m1;
    cin>>h2>>m2;
 
    int res = 0;
 
    if (h1 > h2) res += min(h1 - h2, 24-h1+h2);
    else res = min(h2-h1, 24-h2+h1);
 
    if (m1 > m2) {
        res += min(m1 - m2, 60-m1+m2-1);
    } else if (m2 > m1) {
        res += min(m2 - m1, 60-m2+m1-1);
    }
 
    if ( (m1 == 15 && m2 == 45) || (m1 == 45 && m2 == 15) ) {
        res++;
    }
 
    if (m1+(60-m2) == 24 && h1<h2) {
        res += 2;
    }
 
    cout<<res;
 
    return 0;
}