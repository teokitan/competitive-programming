#include <bits/stdc++.h>
 
#define pb(x) push_back((x))
#define MS(x,y) memset((x), (y), sizeof(x))
#define ll long long
 
using namespace std;
 
struct point{
    int x,y;
};
 
string inside(point lowerLeft, point upperRight, point pt) {
    if(pt.x < lowerLeft.x)
    {
        return "nadvor";
    }
 
    if(pt.y < lowerLeft.y)
    {
        return "nadvor";
    }
 
    if(pt.x > upperRight.x)
    {
        return "nadvor";
    }
 
    if(pt.y > upperRight.y)
    {
        return "nadvor";
    }
 
    //strana
 
    if(pt.x == lowerLeft.x)
    {
        return "strana";
    }
 
    if(pt.y == lowerLeft.y)
    {
        return "strana";
    }
 
    if(pt.x == upperRight.x)
    {
        return "strana";
    }
 
    if(pt.y == upperRight.y)
    {
        return "strana";
    }
 
    return "vnatre";
}
 
int main()
{
    #if LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    point lowerLeft;
 
    cin>>lowerLeft.x>>lowerLeft.y;
 
    int a,b;
 
    cin>>a>>b;
 
    point pt;
 
    cin>>pt.x>>pt.y;
 
    point upperRight;
 
    upperRight.x = lowerLeft.x + a;
    upperRight.y = lowerLeft.y + b;
 
    cout<<inside(lowerLeft, upperRight, pt);
 
    return 0;
}