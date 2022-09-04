#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str;
    long long int denari = 1;
 
    cin>>str;
    //cout << endl << str.size();
    //cout<<"-----------------------";
 
    if(250 >= str.length()) {
 
    for (int i = 0; i<str.size(); ) {
        if (str[i] == 'D' || str[i] == 'd') {
            denari*= 2;
            i+= 5;
        }
 
        if (str[i] == 'T' || str[i] == 't') {
            denari*=3;
            i+= 8;
        }
 
        if (str[i] == 'M' || str[i] == 'm') {
            denari-=1;
            i+= 5;
        }
    }
 
 
    cout<<denari; }
    else
 
    return 0;
}