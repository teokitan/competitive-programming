#include <bits/stdc++.h>
 
#define pb push_back
#define MS(a,y) memset(a,y,sizeof(a))
 
using namespace std;
int main()
{
    int n,nzs=0,gol=0;
    cin>>n;
    string niz[1010],naz[1010];
    for(int i=0;i<n;i++)
        {
            cin>>niz[i];
            naz[i]=niz[i];
            if(gol<niz[i].size())
                gol=niz[i].size();
        }
        nzs=gol;
    stringstream res;
    for(int i=0;i<n;i++)
    {
        int z=niz[i].size();
        while(nzs%z!=0) nzs+=gol;
    }
    for(int i=0;i<n;i++)
    {
        gol=nzs/niz[i].size();
        while(gol--)
        {
            naz[i]+=niz[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(naz[i]<naz[j])
            {
                swap(niz[i],niz[j]);
                swap(naz[i],naz[j]);
            }
        }
    }
    for(int i=0;i<n;i++) res<<niz[i];
    cout<<res.str()<<endl;
    return 0;
}