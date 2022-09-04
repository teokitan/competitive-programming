#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main()
{
    int z,r,br1,br2;
 
    cin>>z>>r;
 
    br2 = (z-r) / 2;
 
    br1 = z-br2;
 
    if(br1>=0 && br2>=0 && (z+r)%2==0)
        cout << br1 << " " << br2;
    else
        cout << "NE MOZE";
 
    return 0;
}