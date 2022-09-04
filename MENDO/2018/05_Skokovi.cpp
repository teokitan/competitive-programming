#include<bits/stdc++.h>
using namespace std;
 
struct pos{
    int x;
    int y;
    int moves;
};
 
int sizex, sizey;
int mat[5][6];
pos start, temp;
 
bool visited[5][6];
 
int counter=0;
bool found=false;
 
void bfs(pos current){
 
    if(current.moves == counter) {found = true; return; }
 
 
    if(current.moves %2 == 0){ // hor
 
        for(int i=0;i<sizex;i++){
            if( i!=current.x && !visited[i][current.y] && mat[i][current.y] == 1) { int save = current.x;
                visited[i][current.y] = true; current.x = i; current.moves++;
                bfs(current);
                visited[i][current.y] = false; current.x = save; current.moves--;
            }
        }
 
    }
    else{ // ver
 
 
        for(int i=0;i<sizey;i++){
            if( i!=current.y && !visited[current.x][i] && mat[current.x][i] == 1) { int save = current.y;
                visited[current.x][i] = true; current.y = i; current.moves++;
                bfs(current);
                visited[current.x][i] = false; current.y = save; current.moves--;
            }
        }
 
    }
 
    return;
}
 
int main() { ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> sizex >> sizey;
 
    for(int i=0;i<sizex;i++){
        for(int j=0;j<sizey;j++){
            cin >> mat[i][j]; if(mat[i][j]==1) counter++;
        }
    }
 
    if ( counter==0 ) { cout << "NE" << endl; return 0; }
 
    for(int i=0;i<sizex;i++){
        for(int j=0;j<sizey;j++){
            if(mat[i][j]==1){
                memset(visited, 0, sizeof(visited));
 
                start.moves = 1; start.x = i; start.y = j;
 
                visited[i][j] = true;
 
                bfs(start);
 
                if ( found ) {
                    cout << "DA" << endl; return 0;
                }
            }
        }
    }
 
    cout << "NE" << endl;
 
}