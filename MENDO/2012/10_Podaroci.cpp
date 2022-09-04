#include<bits/stdc++.h>
 
#define pb push_back
#define MS(a,y) memset(a,y,sizeof(a))
 
using namespace std;
 
int di[4]={1,-1,0,0},dy[4]={0,0,1,-1};
 
int main()
{
    int a[150],n,i,j=0,k,ans=0;
    cin>>n;
    for(i=0;i<n;i++) {cin>>a[i]; j+=a[i];}
    if(j%n!=0)
    {
        cout<<"GRESHKA"<<endl;
        return 0;
    }
    for(i=0;i<n;i++) if(a[i]>j/n) ans+=a[i]-j/n;
    cout<<ans<<endl;
    return 0;
}