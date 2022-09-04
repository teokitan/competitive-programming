#include <bits/stdc++.h>
 
typedef long long ll;
 
#define pb push_back
#define MS (a, y) memset (a, y, sizeof(a))
#define mn 1000000
 
using namespace std;
 
bool check (int a, int b, int c, int br) {
    bool res = a != br && b != br && c != br;
    return res;
}
 
int sleden (int br) {
    int res = br;
 
    while (br > 0) {
        res += br % 10;
        br /= 10;
    }
 
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int br;
 
    cin>>br;
 
    int drugi[3];
 
    int tmp = 1;
 
    for (int i = 0; i<3; i++) {
        drugi[i] = tmp;
        tmp *= 3;
    }
 
    while (check(drugi[0],drugi[1],drugi[2],br)) {
        for (int i = 0; i<3; i++) {
            while (drugi[i] < br) drugi[i] = sleden(drugi[i]);
        }
 
        if (check(drugi[0],drugi[1],drugi[2],br)) {
            br = sleden(br);
        }
    }
 
    if (drugi[0] == br) cout<<"1 "<<br;
    if (drugi[1] == br) cout<<"3 "<<br;
    if (drugi[2] == br) cout<<"9 "<<br;
 
    return 0;
}