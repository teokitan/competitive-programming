#include<iostream>
#include<cctype>
 
using namespace std;
  
int main(int argc, char *argv[])
{
    char c;
 
    cin>>c;
 
    if (isupper(c)) {
        cout<<"GOLEMA\n";
    } else if (islower(c)) {
        cout<<"MALA\n";
    } else {
        cout<<"GRESKA\n";
    }
  
    return 0;
}