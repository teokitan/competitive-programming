#include<iostream>
#include<stack>
#include<queue>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    stack<int> sd;
    int number,zbir = 0;
 
    cin>>number;
 
 
    while (number > 0)
    {
        int digit = number%10;
        number /= 10;
        sd.push(digit);
    }
 
    while (!sd.empty())
    {
        int digit = sd.top();
        sd.pop();
        //print digit
        zbir+=digit;
    }
 
    cout<<zbir;
 
    return 0;
}