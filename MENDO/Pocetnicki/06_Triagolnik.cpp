#include<iostream>
using namespace std;
  
int main(int argc, char *argv[])
{
    int input1,input2,input3;
 
    cin>>input1>>input2>>input3;
 
    int zbir1,zbir2,zbir3;
 
    zbir1 = input1+input2;
 
    zbir2 = input1+input3;
 
    zbir3 = input2+input3;
 
    if (zbir1>input3 && zbir2>input2 && zbir3>input1) {
        cout<<"DA\n";
    } else {
        cout<<"NE\n";
    }
  
    return 0;
}