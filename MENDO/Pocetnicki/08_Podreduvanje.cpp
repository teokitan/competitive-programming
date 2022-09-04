#include <bits/stdc++.h>
 
#define pb push_back
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
 
    int a,b,c;
 
    cin>>a>>b>>c;
 
    if (a<b && a<c){
        if(b<c){
            cout<< a<< " "<<b<<" "<<c;
        } else {
            cout<<a<<" "<<c<<" "<<b;
        }
    } else if(b<a && b<c){
        if (a<c) {
            cout<<b<<" "<<a<<" "<<c;
        } else {
            cout<<b<<" "<<c<<" "<<a;
        }
    } else {
        //elseov znaci ako c e najmaliot
        if(a<b){
            cout<<c<<" "<<a<<" "<<b;
        } else {
            cout<<c<<" "<<b<<" "<<a;
        }
    }
 
    return 0;
}