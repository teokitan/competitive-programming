#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define MN 1000000001
  
using namespace std;
  
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int l;
    double x;
    cin>>l>>x;
    x /= 100.0;
  
    double res = l*x;
    int br = res;
    if (res-br <= 0.001) br--;
  
    cout<<br<<endl;
}