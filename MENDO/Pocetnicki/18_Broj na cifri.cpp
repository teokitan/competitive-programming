#include<iostream>
#include<cmath>
 
using namespace std;
 
unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
 
int main(int argc, char *argv[])
{
    int k,zbir = 0;
 
    cin>>k;
 
    int br = GetNumberOfDigits(k); 
 
 
    cout<<br;
}