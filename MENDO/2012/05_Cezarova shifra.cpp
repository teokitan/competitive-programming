#include <bits/stdc++.h>
using namespace std;
 
char encode(char ch, int x)
{
    string azbuka;
    for (char c='a'; c<='z'; c++) {
        azbuka += c;
    }
 
    for (char c='y'; c>='a'; c--) {
        azbuka += c;
    }
 
    int pos = ch - 'a';
    pos += x;
 
    return azbuka[pos];
}
 
int main()
{
    int x;
    cin >> x;
 
    string org;
    cin >> org;
 
    string kodiran = "";
 
    for (int i=0; i<org.size(); i++) {
        kodiran += encode(x, org[i]);
    }
 
    cout << kodiran << endl;
    return 0;
}