#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS memset (a, y, sizeof(a))
#define mn 1000000
 
using namespace std;
 
int main()
{
//    fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int kecovi,dvojki,dolzina;
    kecovi=dvojki=dolzina=0;
 
    bool vnesNaDolzina = true;
 
    int in = 0;
 
    while (in != 3) {
        cin>>in;
        if (in == 1 || in == 3) kecovi++;
        else dvojki++;
 
        if (in != 1) vnesNaDolzina = false;
 
        if (vnesNaDolzina) dolzina++;
    }
 
    dolzina--;
 
    cout<<((kecovi - dolzina*2)/2)+2<<" "<<dolzina;
 
    return 0;
}