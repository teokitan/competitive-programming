#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string input;
    int tezina = 0;
 
    cin>>input;
 
    for (int i = 1; i<input.length(); i++)
    {
        if (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u')
        {
            if (input[i-1] != 'a' && input[i-1] != 'e' && input[i-1] != 'i' && input[i-1] != 'o' && input[i-1] != 'u')
            {
                tezina++;
            }
        }
    }
 
    cout<<tezina;
 
    return 0;
}