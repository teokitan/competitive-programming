#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int dK,sK,n;
 
    cin>>dK>>sK>>n;
 
    int niza[n][2];
 
    for (int i = 0; i<n; i++) cin>>niza[i][0]>>niza[i][1];
 
    int res = 0;
    vector <pair<int,int>> resPair;
 
    for (int i = 0; i<n; i++) {
        if (niza[i][0] <= dK && niza[i][1] <= sK) {
            res++;
            resPair.push_back(make_pair(niza[i][0], niza[i][1]));
        } else if (niza[i][1] <= dK && niza[i][0] <= sK) {
            res++;
            resPair.push_back(make_pair(niza[i][0], niza[i][1]));
        }
    }
 
    cout<<res<<endl;
 
    for (int i = 0; i<resPair.size(); i++) {
        cout<<resPair[i].first<<" "<<resPair[i].second<<"\n";
    }
 
    return 0;
}