#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int niza[n];
    for (int i = 0; i<n; i++) {
        cin>>niza[i];
    }
 
    int mat[3][n];
    memset(mat, -1, sizeof(mat));
    // 0 = ne gledam sport
    // 1 = gledam fudbal
    // 2 = gledam rakomet
    if (niza[0] == 0) {
        mat[0][0] = 0;
        //mat[1][0] = -1;
        //mat[2][0] = -1;
    } else if (niza[0] == 1){
        mat[0][0] = 0;
        mat[1][0] = 1;
        //mat[2][0] = -1;
    } else if (niza[0] == 2){
        mat[0][0] = 0;
        //mat[1][0] = -1
        mat[2][0] = 1;
    } else {
        mat[0][0] = 0;
        mat[1][0] = 1;
        mat[2][0] = 1;
    }
 
    for (int i = 1; i<n; i++) {
        mat[0][i] =  max(mat[0][i-1], max(mat[1][i-1], mat[2][i-1]));
        if (niza[i] == 1 || niza[i] == 3) {
            mat[1][i] = max(mat[0][i-1], mat[2][i-1]) + 1;
        }
 
        if (niza[i] == 2 || niza[i] == 3) {
            mat[2][i] = max(mat[0][i-1], mat[1][i-1]) + 1;
        }
    }
 
    cout<<max(max(mat[0][n-1], mat[1][n-1]), mat[2][n-1]);
    return 0;
}