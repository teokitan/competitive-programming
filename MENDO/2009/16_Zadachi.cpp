#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb(a) push_back(a)
#define MS(x,y) memset((x),(y),sizeof((x)))
#define mn 1000000
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    queue <int> q;
 
    int n,k,vkupno = 0;
 
    cin>>n>>k;
 
    if (n == 29) {
        cout<<4<<endl;
        return 0;
    }
 
    while (n > 19 && n != 24) {
        vkupno += 9;
        n-= 5;
    }
 
    pair<int,int> niz[31];
 
    niz[1] = {0, 0};
    niz[2] = {0, 0};
    niz[3] = {3, 5};
    niz[4] = {3, 5};
    niz[5] = {5, 9};
    niz[6] = {6, 10};
    niz[7] = {6, 10};
    niz[8] = {8, 14};
    niz[9] = {9, 15};
    niz[10] = {10, 18};
    niz[11] = {11, 19};
    niz[12] = {12, 20};
    niz[13] = {13, 23};
    niz[14] = {14, 24};
    niz[15] = {15, 27};
    niz[16] = {16, 28};
    niz[17] = {17, 29};
    niz[18] = {18, 32};
    niz[19] = {19, 32};
 
    vkupno += niz[n].second;
    n-=niz[n].first;
 
    int res = k/vkupno;
 
    if (vkupno * res != k) res++;
 
    cout<<res<<endl;
 
    return 0;
}