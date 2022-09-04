#include <bits/stdc++.h>
  
typedef long long ll;
  
#define pb push_back
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
  
using namespace std;
  
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    multiset<int> dob,livce;
  
    for (int i = 0; i<7; i++) {
        int a;
  
        cin>>a;
  
        dob.insert(a);
  
    }
  
    for (int i = 0; i<30; i++) {
        int a;
  
        cin>>a;
  
        livce.insert(a);
    }
  
    bool check = true;
  
    for (auto it:dob) if (livce.count(it) < dob.count(it)) check = false;
  
    if (check) cout<<"DA"<<endl;
    else cout<<"NE"<<endl;
  
    return 0;
}