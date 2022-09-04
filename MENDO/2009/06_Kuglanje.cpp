#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n,currentCol = 0,zbir = 0,largest = -1;
 
    cin>>n;
 
    int niz[n][n],currentRow = n-2;
 
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cin>>niz[i][j];
        }
    }
 
 
 
    for (int currentRow = n-2; currentRow >= 0; currentRow--)
    {
        for (int i = 0; i<=currentRow; i++)
        {
              niz[currentRow][i] += max(niz[currentRow+1][i],niz[currentRow+1][i+1]);
        }
    }
 
    zbir = niz[0][0];
 
    //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
 
    cout<<zbir;
 
    return 0;
}