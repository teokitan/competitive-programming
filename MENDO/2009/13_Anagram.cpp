#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    string a,b;
    int n,j,i,k,edC=0,anBr=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        edC=0;
        cin>>a>>b;
        for(j=0;j<a.size();j++)
        {
            for(k=0;k<a.size();k++)
            {
                if(a[j]==b[k])
                {
                    edC++;
                    b[k]='z';
                    k=a.size();
                }
            }
        }
    if(edC==a.size())
    {
        anBr++;
    }
 
    }
    cout<<anBr;
    return 0;
}