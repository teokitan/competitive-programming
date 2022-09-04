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
 
    int n;
 
    cin>>n;
 
    bool topce[50000];
    memset(topce, false, sizeof(topce));
    ///True == ima informacii
    ///False == nema
 
    for (int i = 0; i<n; i++) {
        int br;
        string str;
 
        cin>>br>>str;
 
        if (str == "DA") {
            for (int ctr = br; ctr<50000; ctr++) {
                topce[ctr] = true;
            }
        } else {
            for (int ctr = br; ctr >= 0; ctr--) {
                topce[ctr] = true;
            }
        }
    }
 
    int a,b;
    a=b=-1;
 
    for (int i = 0; i<50000; i++) {
        if (!topce[i] && a == -1) {
            a = i;
            b = i;
        } else if (!topce[i] && a != -1) {
            b++;
        }
    }
 
    cout<<a<<" "<<b<<endl;
 
    return 0;
}