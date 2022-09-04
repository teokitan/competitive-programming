#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    long long n,m,s,res = 1,dosega = 0;
 
    cin>>n>>m>>s;
 
    for (long long i = 1; dosega < s; i++) {
        if (i <= 100) dosega += n;
        else dosega += m;
 
        res++;
    }
 
    cout<<res-1<<endl;
 
    return 0;
}