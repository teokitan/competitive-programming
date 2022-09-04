#include <iostream>
using namespace std;
  
int main()
{
    int m, n;
    cin >> m >> n;
  
    int result = 0;
  
    for (int i=1; ; i++)
    {
        if ((i%m==0) && (i%n==0))
        {
            result = i;
            break;
        }
    }
  
    cout << result << endl;
    return 0;
}