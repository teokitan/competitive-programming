#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, pot = 1, space;
 
    cin>>n;
 
    int casovi[n];
 
    for (int i = 0; i<n; i++)
    {
        int br1,br2;
        cin>>br1>>br2;
        casovi[i] = br1*60 + br2;
    }
 
    for (int i=0; i<n-1; i++)
    {
        int space = 1;
        for (int j=i+1; j<n; j++)
        {
            if (casovi[i] == casovi[j])
                        space++;
            else
                break;
        }
        if (space > pot)
           pot = space;
    }
 
 
    cout<<pot;
 
    return 0;
}