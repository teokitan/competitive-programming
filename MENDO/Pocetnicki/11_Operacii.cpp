#include<iostream>
using namespace std;
  
int main(int argc, char *argv[])
{
    int a,b;
    char op;
 
    cin>>a>>b;
    cin>>op;
 
    if (op == '+') {
        cout<<a+b;
    } else if (op == '-') {
        cout<<a-b;
    } else if (op == '/') {
        cout<<a/b;
    } else if (op == '*') {
        cout<<a*b;
    }
  
    return 0;
}