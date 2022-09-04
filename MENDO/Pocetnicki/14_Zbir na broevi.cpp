#include<iostream>
#include<cctype>
 
using namespace std;
  
int main(int argc, char *argv[])
{
    int n;
 
    cin>>n;
 
    int zbir = 0;
    int niz[n];
 
    for (int i = 0; i<n; i++) {
        cin>>niz[i];
        zbir+= niz[i];
    }
 
    cout<<zbir;
}