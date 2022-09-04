#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    int data,petki = 0,glavi = 0;
 
    for (int i = 0; i<4; i++) {
        cin>>data;
        if(data == 5) {
            petki++;
        } else if (data == 0) {
            glavi++;
        }
    }
 
    if (petki>glavi) {
        cout<<glavi;
    } else if (glavi>petki) {
        cout<<petki;
    } else {
        cout<<2;
    }
 
 
 
    return 0;
}