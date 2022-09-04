#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
  
using namespace std;
  
struct dummy
{
    int a;
    int del;
};
  
// bool sporedi(dummy a, dummy b)
// {
//  return(a.a < b.a);
// }
  
int deliteli(int a);
int stepeni[10] = {1, 10, 100, 1000, 10000, 100000, 1000000};
  
int main()
{
    int n, i, broj, momdel, najmal;
    cin >> n;
    vector<int> cifri(n);
  
    vector<dummy> broevi;
    for(i = 0; i < n; i++)
        cin >> cifri[i];
    sort(cifri.begin(), cifri.end());
  
    najmal = 9999999;
    do
    {
        broj = 0;
        for(i = 0; i < n; i++)
            broj += cifri[i] * stepeni[n - i - 1];
        momdel = deliteli(broj);
        broevi.push_back({broj, momdel});
        if(momdel < najmal)
            najmal = momdel;
    } while(next_permutation(cifri.begin(), cifri.end()));
    cout << najmal << endl;
    //sort(broevi.begin(), broevi.end(), sporedi);
    for(i = 0; i < broevi.size(); i++)
    {
        if(broevi[i].del == najmal)
            cout << broevi[i].a << " ";
    }
    cout << endl;
    return(0);
}
  
int deliteli(int a)
{
    int i, j, koren, brojac;
    koren = (int)sqrt(a);
    brojac = 0;
    for(i = 1; i <= koren; i++)
    {
        if(a % i == 0)
        {
            brojac++;
            j = a / i;
            if(i != j)
                brojac++;
        }
    }
    return(brojac);
}