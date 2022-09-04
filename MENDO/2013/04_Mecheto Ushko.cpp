#include <bits/stdc++.h>
 
using namespace std;  
       
    int main(){  
 
        int i, j, n, k, zbir=0;  
        cin>>n;
           
        int niza[n];  
         
        for(i=0;i<n;i++)  
        {  
              cin>>niza[i];  
              zbir+=niza[i];  
        }  
         
        int x;  
        bool c[(zbir)+1];  
         
        memset(c,false,sizeof(c));  
        c[0]=true;  
         
        for(i=0;i<n;i++)  
        {  
              k=niza[i];  
              for(j=zbir;j>=0;j--)  
              {  
                    x=j+k;  
                    if(c[j]==true)  
                    {  
                          if(j+k<zbir)  
                          c[j+k]=true;  
                    }  
              }  
        }  
       
        int p=0,q=0;  
          for(i=zbir/2;i>=0;i--)  
          {  
                if(c[i]==true)  
                {  
                      p=i;  
                      break;  
                }  
          }  
          q=zbir-p;  
          cout<<fabs(p-q)<<endl;  
       
       
        return 0;  
    }