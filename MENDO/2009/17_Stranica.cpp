#include <iostream>  
#include <string>  
#include <sstream>  
using namespace std;  
    
int diff(int n1, int n2){  
   if(n1 > n2){  
      return n1 - n2;  
   }  
    
   return n2 - n1;  
}  
    
string to_string(int number){  
   ostringstream oss;  
   oss << number;  
    
   return oss.str();  
}  
    
int cost(int number){  
    //the cost to write is the number of digits in the number  
    return (to_string(number)).size();  
}  
    
int canWrite(int number, int broken[]){  
  string s = to_string(number);  
    
  for(int i=0; i<s.size(); i++){  
     int digit = (s[i] - '0'); //convert from char to digit  
     if(broken[digit]){  
        return false;  
     }  
  }  
    
  return true;  
}  
    
int main() {  
   int p, n;  
   cin >> p >> n;  
    
   int broken[10] = {0};  
        
   for(int i=0; i<n; i++){  
      int button;  
      cin >> button;  
    
      broken[button] = 1;  
   }  
    
   //go from 100 to P  
   int bestCost = p - 100;  
        
   //try to write every possible page (and to use +- from there)  
   for(int i=100; i<=99999; i++){  
      int costToWrite = cost(i);  
      int totalCost = costToWrite + diff(i, p);  
    
      if(canWrite(i, broken) && totalCost < bestCost){  
            bestCost = totalCost;  
      }  
   }  
    
   cout << bestCost << endl;  
   return 0;
}