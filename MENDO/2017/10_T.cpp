#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,najmnogu = 0;
    long long m;
 
    cin>>n>>m;
 
    int niza[n];
 
    for (int i = 0; i<n; i++)
    {
        cin>>niza[i];
    }
 
    if (n <= 1000)
    {
        for (int i = 0; i<n; i++)
        {
            int suma = 0;
            int epizodi = 0;
 
            for (int j = i; j<n; j++)
            {
                if (suma + niza[j] <= m)
                {
                    suma += niza[j];
                    epizodi++;
                }
                else
                {
                    break;
                }
            }
 
            najmnogu = max(najmnogu, epizodi);
        }
 
        cout<<najmnogu;
    }
    else
    {
        int pocetna = 0, krajna = 0;
        int suma = 0;
        int res = 0;
 
        while(pocetna<n && krajna < n) {
            if (suma + niza[krajna] <= m) {
                suma += niza[krajna];
                krajna++;
                res = max(res, krajna-pocetna);
            } else {
                suma -= niza[pocetna];
 
                if (suma < 0) suma = 0;
 
                pocetna++;
                if (krajna < pocetna) krajna = pocetna;
            }
        }
 
        cout<<res;
    }
 
    return 0;
}