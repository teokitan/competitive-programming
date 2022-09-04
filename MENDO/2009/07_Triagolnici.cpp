#include <iostream>
#include <cmath>
  
using namespace std;
  
struct pole{
    int x, y;
};
int main()
{
    int n, i, j, l, count=0, a, b, c;
    cin >> n;
    pole niza[n];
    for(i = 0; i<n; i++)cin >> niza[i].x >> niza[i].y;
    for(i = 0; i<n; i++)
        for(j = i+1; j<n; j++)
            for(l = j+1; l<n; l++)
            {
                a = (pow(niza[j].x-niza[l].x, 2) + pow(niza[j].y-niza[l].y, 2))+0.00001;
                b = (pow(niza[i].x-niza[l].x, 2) + pow(niza[i].y-niza[l].y, 2))+0.00001;
                c = (pow(niza[i].x-niza[j].x, 2) + pow(niza[i].y-niza[j].y, 2))+0.00001;
                if(c == a+b)count++;
                else if(a == c+b)count++;
                else if(b == a+c)count++;
            }
    cout << count;
    return 0;
}