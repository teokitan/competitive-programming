#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int row, col;
    string scol;
     
    cin >> scol >> row;
    col = scol[0] - 'a' + 1;
     
    int n;
    cin >> n;
     
    int answer = 0;
     
    int mx[] = {-2,-1,1,2, 2, 1,-1,-2};
    int my[] = {1 ,2, 2,1,-1,-2,-2,-1};
     
    for (int i=0; i<n; i++)
    {
        int cr, cc;
        string scc;
         
        cin >> scc >> cr;
        cc = scc[0] - 'a' + 1;
                         
        for (int j=0; j<8; j++)
            if (row+my[j] == cr)
               if (col+mx[j] == cc)
                  answer++;
    }
     
    cout << answer << endl;
    return 0;
}