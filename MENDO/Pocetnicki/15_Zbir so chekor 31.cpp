#include<iostream>
#include<cctype>
 
using namespace std;
  
int main(int argc, char *argv[])
{
    int k,data;
 
    cin>>k;
 
    int zbir = 1;
    data = 1;
 
    for (int i = 1; i<k; i++) {
        zbir+=3;
        data +=zbir;
    }
 
    cout<<data;
}