#include <bits/stdc++.h>
  
typedef long long ll;
  
#define MS(x,y) memset((x), (y), sizeof((x)))
#define MN 1000000002
#define pb push_back
  
using namespace std;
  
int main()
{
    #ifdef LOCAL_DEBUG
        fstream cin("in.txt");
    #endif
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n,k;
    cin>>n>>k;
  
    int niza[n];
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
        if (niza[i] == 0) niza[i] = 1;
        else niza[i] = 0;
    }
  
    int left = 0;
    int currZbir = niza[0];
    int maxDolz = 1;
    int leftM = -1, rightM = -1;
  
    for (int right = 1; right<n; right++) {
        currZbir += niza[right];
  
        if (currZbir > k) {
            while(currZbir > k) {
                currZbir -= niza[left];
                left++;
            }
        }
  
        if (right-left+1 > maxDolz) {
            maxDolz = right-left+1;
            leftM = left;
            rightM = right;
        }
    }
  
    cout<<maxDolz<<endl;
  
    for (int i = leftM; i<=rightM; i++) {
        if (niza[i] == 1) cout<<i+1<<" ";
    }
}