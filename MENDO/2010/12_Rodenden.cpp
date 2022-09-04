#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int godini;
     cin >> godini;
     
     int klk[10];
     for (int i=0; i<10; i++)
        klk[i] = 0;
         
     while (godini > 0)
     {
         int lastDigit = godini % 10;
         klk[lastDigit] ++;
          
         godini /= 10;             
     }
      
     klk[6] += klk[9]; //consider all as 6
     klk[9] = 0;
      
     if (klk[6] % 2 > 0)
        klk[6] = klk[6] / 2 + 1;
     else
        klk[6] = klk[6] / 2;
         
     int largest = 0;
      
     for (int i=0; i<10; i++)
        if (klk[i] > largest)
           largest = klk[i];
            
     cout << largest << endl;
     return 0; //exit code zero
}