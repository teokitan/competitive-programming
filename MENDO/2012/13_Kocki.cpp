#include <bits/stdc++.h>
 
#define pb push_back
#define MS(a,y) memset(a,y,sizeof(a))
 
using namespace std;
 
int main()
{
    long long n,i,j,k,dp[90];
    cin>>n;
    MS(dp,0);
 
    dp[3]=1;
    for(i=4;i<=n;i++)
    {
        dp[i]++;
        for(j=3;j<i;j++)
            dp[i]+=i-j+1;
        for(k=3;k<=n;k++)
            for(j=i-k-1;j>0;j--)
                dp[i]+=dp[j];
    }
 
 
        cout<<dp[n]+1<<endl;
    return 0;
}