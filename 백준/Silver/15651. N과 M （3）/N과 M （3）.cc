#include <iostream>
using namespace std;

int n, m;
int arr[9];
bool visited[9];
void dfs(int depth){
    if(depth == m){
        for(int i=0; i<m; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    }
    else{
        for(int i=1; i<=n; i++){
            arr[depth] = i;
            dfs(depth+1);
            
        }
    }
}

int main(){
    cin>>n>>m;
    dfs(0);
}