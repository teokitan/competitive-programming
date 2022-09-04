#include <iostream>
using namespace std;
 
int main()
{
    int n, k, kv=0, minvreme=9999999, minkom=9999999;
    cin>>n>>k;
    for(int i=1; i<999999; i++)
    {
        for(int j=1; j<i; j++)
        {
            kv+=j;
        }
        if((n%i==0)&&(kv*k+n/i<minvreme))
        {
            minvreme=kv*k+n/i;
        }
        else if ((n%i!=0)&&(kv*k+n/i+1<minvreme))
            minvreme=kv*k+n/i+1;
            //minvreme=kv*k+n%i+n/i;
        else break;
        kv=0;
        minkom=i;
    }
    cout<<minkom;
    return 0;
}