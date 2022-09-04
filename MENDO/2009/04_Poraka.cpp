#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n,j;
    bool dane;
 
    cin>>n;
    string str[n][2];
 
    for (int i = 0; i<n; i++)
    {
        dane = false;
 
        cin>>str[i][0];
        cin>>str[i][1];
 
        j=0;
 
        for (int m = 0; m < str[i][1].size(); m++)
        {
            if (str[i][0][j] == str[i][1][m])
            {
                j++;
            }
 
            if (j >= str[i][0].size())
            {
                dane=true;
                break;
            }
        }
 
        if (dane == false)
        {
            cout<<"NE"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
 
    return 0;
}