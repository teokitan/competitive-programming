#include <bits/stdc++.h>
 
using namespace std;
 
int length(int num)
{
    if (num < 10)
       return 1;
    if (num < 100)
       return 2;
    if (num < 1000)
       return 3;
    if (num < 10000)
       return 4;
    if (num < 100000)
       return 5;
    if (num < 1000000)
       return 6;
    if (num < 10000000)
       return 7;
    if (num < 100000000)
       return 8;
    if (num < 1000000000)
       return 9;
     
    return 10;
}
 
int solve(int n)
{
    int plen = 0, end = 0;
     
    for (int i=1; ; i++)
    {
        plen += length(i); //vkupna dolzina na eden del (12345678910111213...)
         
        if (n > plen) //ne e ovoj del, odi ponataka
        {
              n -= plen;
        } else
        {
              end = i; //baranata cifra e vo delot 123456789101112---se do i (end)
              break;
        }
    }
     
   ostringstream oss; //pretvori go delot vo string
     
    for (int j=1; j<=end; j++)
        oss << j;
         
   string res = oss.str();  
   return ((int)(res[n-1] - '0'));  //zemi cifra na baranata pozicija       
}
 
int main()
{
    int n;
    cin >> n;
 
    cout << solve(n) << endl;
    return 0;
}