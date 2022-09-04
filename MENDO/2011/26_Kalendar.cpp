#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int m,g;
 
    cin>>m>>g;
 
    if (m % 2 == 0 && m <= 7 && m != 2) cout<<30;
    else if (m % 2 == 1 && m >= 8 && m != 2) cout<<30;
    else if (m % 2 == 1 && m <= 7 && m != 2) cout<<31;
    else if (m % 2 == 0 && m >= 8 && m != 2) cout<<31;
    else if (m == 2 && ( ( g % 4 == 0 && g % 100 != 0 ) || g % 400 == 0) ) cout<<29; else cout<<28;
 
    return 0;
}