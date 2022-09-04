#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
   
int main()
{
    int n, m;
    cin >> n >> m;
   
    vector<int> v;
   
    for (int i=0; i<n; i++)
    {
        int br;
        cin >> br;
   
        v.push_back(br);
    }
   
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
   
    int rez = 0;
   
    for (int i=0; i<v.size(); i+=m)
    {
        rez  += v[i];
        rez  += v[i];
    }
   
    cout << rez << endl;
    return 0;
}