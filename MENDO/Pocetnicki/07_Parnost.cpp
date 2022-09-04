#include <bits/stdc++.h>
 
#define pb(x) push_back((x))
#define MS(x,y) memset((x), (y), sizeof(x))
#define ll long long
 
using namespace std;
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int br1;
 
    cin>>br1;
 
    if(br1 % 2 == 0) {
        cout<<"PAREN";
    }
    else {
        cout<<"NEPAREN";
 
    }
 
    return 0;
}