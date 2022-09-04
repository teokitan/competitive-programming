#include <bits/stdc++.h>  
   
using namespace std;  
   
int main() {  
    string str;  
    char s;  
   
    cin>>str>>s;  
   
    int krsenja = 0;  
   
    for (int i = 0; i<str.length(); i++) {  
        if (i == 0) {  
            krsenja++;  
        } else if (str[i-1] != s && str[i] == s) {  
            krsenja++;  
        } else if (str[i-1] == s && str[i] != s) {  
            krsenja++;  
        }  
    }  
   
    cout<<krsenja-1;  
   
    return 0;  
}  