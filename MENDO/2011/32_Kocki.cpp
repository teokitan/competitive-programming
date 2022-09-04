#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    int n,m,nnew;
 
    cin>>n>>m;
 
    if (n>m) {
        nnew = n - (n-m);
        if (nnew * nnew % 2 == 0) {
            cout<<nnew*nnew;
            return 0;
        } else {
            nnew -= 1;
            cout<<nnew*nnew;
            return 0;
        }
    } else {
        nnew = m - (m-n);
        if (nnew * nnew % 2 == 0) {
            cout<<nnew*nnew;
            return 0;
        } else {
            nnew -= 1;
            cout<<nnew*nnew;
            return 0;
        }
    }
 
    return 0;
}