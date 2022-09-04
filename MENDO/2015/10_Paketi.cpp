#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS memset (a, y, sizeof(a))
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int a,b;
 
    cin>>a>>b;
 
    for (int i = a; i>=1; i--) {
        for (int j = b; j>=1; j--) {
            if (a % i == 0 && b % j == 0 && a/i == b/j) {
                cout<<a/i<<endl;
            }
        }
    }
 
    return 0;
}