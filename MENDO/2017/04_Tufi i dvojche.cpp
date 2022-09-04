#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS memset (a, y, sizeof(a))
#define mn 1000000
 
using namespace std;
 
int main()
{
    //fstream cin("in.txt");
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tufi[2][2];
    int dvojce[2][2];
 
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++) {
            cin>>tufi[i][j];
        }
    }
 
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++) {
            cin>>dvojce[i][j];
        }
    }
 
    int tufiRes = ( tufi[0][0] + tufi[1][0] ) * 60 + tufi[0][1] + tufi[1][1];
    int dvojceRes = ( dvojce[0][0] + dvojce[1][0] ) * 60 + dvojce[0][1] + dvojce[1][1];
 
    if (tufiRes < dvojceRes) {
        cout<<"T\n"<<abs( (tufiRes-dvojceRes)/60 )<<" "<<abs ( ( tufiRes - dvojceRes ) % 60 )<<endl;
    } else cout<<"D\n"<<abs ( (dvojceRes-tufiRes) / 60 )<<" "<<abs ( ( tufiRes - dvojceRes ) % 60 )<<endl;
 
    return 0;
}