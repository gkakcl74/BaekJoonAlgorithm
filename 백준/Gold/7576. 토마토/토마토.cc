#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>>q;
int n, m;
int tomato[1001][1001];
int nx[] = {-1, 1, 0, 0};
int ny[] = {0, 0, -1, 1};

void bfs(){
    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int mx = x + nx[i];
            int my = y + ny[i];
            if(mx >= m || my>=n || mx<0 || my<0){
                continue;   
            }
            if(tomato[mx][my] == -1){
                continue;
            }
            if(tomato[mx][my] == 0){
                tomato[mx][my] = tomato[x][y] + 1;
                q.push({mx, my});
            }
        }
    }
    
}

int main(){

    cin>>n>>m;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>tomato[i][j];
            if(tomato[i][j] == 1){
                q.push({i, j});
            }
        }
    }
    int result = 0;
    bfs();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){           
            result = max(result, tomato[i][j] - 1);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){           
             if(tomato[i][j] == 0){
                result = -1; 
            }
        }
    }
    cout<<result<<'\n';
    return 0;
}