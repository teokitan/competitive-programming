#include<iostream>
using namespace std;
  
int main(int argc, char *argv[])
{
    int input,reversedNum=0;
    int input2,reversedNum2=0;
   
    cin>>input;
  
    input -= input % 10;
    input/10;
   
    while (input != 0) {
        reversedNum = reversedNum * 10 + input % 10;
        input = input / 10;   
    }
  
    input = reversedNum;
  
    input -= input % 10;
    input/10;
    input/10;
  
    //DELENJEEE
 
    cin>>input2;
  
    input2 -= input2 % 10;
    input2/10;
   
    while (input2 != 0) {
        reversedNum2 = reversedNum2 * 10 + input2 % 10;
        input2 = input2 / 10;   
    }
  
    input2 = reversedNum2;
  
    input2 -= input2 % 10;
    input2/10;
    input2/10;
 
    int br = input+input2;
 
    cout<<br/10;
  
    return 0;
}