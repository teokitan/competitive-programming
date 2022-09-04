#include <iostream>
#include <algorithm>
  
using namespace std;
  
int main()
{
    int n, current = 0;
    cin>>n;
    int vec[n];
  
    for (int i = 0; i<n; i++) {
        int br;
        cin>>br;
        vec[i] = br;
    }
  
    sort(vec, vec+n);
    reverse(vec, vec+n);
  
    for (int i = 0; i<n; i++) {
        int br2 = vec[i];
        current += br2+1;
  
        if (current >= n) {
            cout<<i+1;
            return 0;
        }
    }
  
    return 0;
}