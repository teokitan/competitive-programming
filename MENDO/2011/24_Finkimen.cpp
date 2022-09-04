#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    // VLEZ
    int roboti = 0;
    int redovi, koloni;
    cin >> redovi >> koloni;
    int mat[redovi][koloni];
    for(int i=0; i<redovi; i++){
        for(int j=0; j<koloni; j++){
            cin >> mat[i][j];
        }
    }
 
    queue<int> qred, qkolona;
    bool vis[redovi][koloni];
    memset(vis, false, sizeof(vis));
 
    while(true){
        int najmalo_red = 0, najmalo_kolona = 0;
        int najmalo = 1000;
        for(int i=0; i<redovi; i++){
            for(int j=0; j<koloni; j++){
                if(mat[i][j] < najmalo && vis[i][j] == false){
                    najmalo = mat[i][j];
                    najmalo_red = i;
                    najmalo_kolona = j;
                }
            }
        }
        if(najmalo == 1000){
            cout << roboti << endl;
            return 0;
        }
        qred.push(najmalo_red);
        qkolona.push(najmalo_kolona);
        vis[najmalo_red][najmalo_kolona] = true;
 
        while(qred.empty() == false){
            int red = qred.front();
            int kolona = qkolona.front();
            qred.pop();
            qkolona.pop();
 
            // levo
            if(kolona-1 >= 0 && vis[red][kolona-1]==false && mat[red][kolona-1] >= mat[red][kolona]){
                vis[red][kolona-1] = true;
                qred.push(red);
                qkolona.push(kolona-1);
            }
 
            if(kolona+1 < koloni && vis[red][kolona+1] == false && mat[red][kolona+1] >= mat[red][kolona]){
                vis[red][kolona+1] = true;
                qred.push(red);
                qkolona.push(kolona+1);
            }
 
            if(red-1 >= 0 && vis[red-1][kolona] == false && mat[red-1][kolona] >= mat[red][kolona]){
                vis[red-1][kolona] = true;
                qred.push(red-1);
                qkolona.push(kolona);
            }
 
            if(red+1 < redovi && vis[red+1][kolona] == false && mat[red+1][kolona] >= mat[red][kolona]){
                vis[red+1][kolona] = true;
                qred.push(red+1);
                qkolona.push(kolona);
            }
        }
        roboti++;
    }
    /**
    4 5
    2 1 2 3 1
    3 1 1 2 2
    3 1 1 7 5
    9 4 4 7 4
    */
    return 0;
}