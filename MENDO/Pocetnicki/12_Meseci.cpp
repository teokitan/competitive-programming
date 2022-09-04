#include<iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
    int input, denovi;
 
    cin>>input;
 
    if (input == 2) {
        denovi = 28;
    } else if (input%2 == 1 && input <=7) {
        denovi = 31;
    } else if (input%2 == 0 && input <=7) {
        denovi = 30;
    } else if (input%2 == 0 && input >7) {
        denovi = 31;
    } else if (input%2 == 1 && input >7) {
        denovi = 30;
    }
 
    cout<<denovi;
 
    return 0;
}