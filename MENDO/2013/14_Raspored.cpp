#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int znaenje[n];
    for(int i=0; i<n; i++){
        cin>>znaenje[i];
    }
    sort(znaenje, znaenje+n);
  
    int levo=znaenje[0], desno=znaenje[0];
    int maksimalna=-1;
  
    for(int i=1; i<n; i+=2){
        maksimalna=max(maksimalna, znaenje[i]-levo);
        levo=znaenje[i];
    }
    for(int i=2; i<n; i+=2){
        maksimalna=max(maksimalna, znaenje[i]-desno);
        desno=znaenje[i];
    }
    maksimalna=max(maksimalna, znaenje[n-1]-znaenje[n-2]);
    cout<<maksimalna;
    return 0;
}