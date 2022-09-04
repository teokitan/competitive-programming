#include <iostream>
using namespace std;
  
int main()
{
    int n, k;
    cin >> n >> k;
  
    int mat[101][101] = {0};
  
    for (int i=0; i<k; i++)
    {
        int x, y;
        cin >> x >> y;
  
        mat[x][y] = 1;
    }
  
    int rezultat = 0;
  
    for (int isprakjac=1; isprakjac<=n; isprakjac++)
        for (int primac=1; primac<=n; primac++)
        {
            if (mat[isprakjac][primac] == 1)
                if (mat[primac][isprakjac] == 0)
                {
                    rezultat++;
                }
        }
  
    cout << rezultat << endl;
    return 0;
}