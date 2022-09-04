#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    int broevi=0,tipki=0,n;
    string broj;
  
    cin>>n;
  
    for(int i=0;i<n;i++) 
    { 
        cin>>broj;
        bool mozedagopise=true;
  
        for(int j=0;j<broj.size();j++)
            if(broj[j]=='1' || broj[j]=='3' || broj[j]=='5' || broj[j]=='7' || broj[j]=='9')
                mozedagopise=false;
  
        if(mozedagopise==true)
        {
            broevi++;
            tipki+=broj.size();
        }
    }
  
    cout<<broevi<<endl<<tipki;
  
    return 0;
}