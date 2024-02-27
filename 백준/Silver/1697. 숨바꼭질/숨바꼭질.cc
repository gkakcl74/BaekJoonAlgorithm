#include <iostream>
#include <queue>
using namespace std;

int n, k;
bool vis[100001];
void bfs(int a){
    queue<pair<int, int>>que;
    que.push(make_pair(a, 0));

    while(!que.empty()){
        int wai = que.front().first;
        int cnt = que.front().second;
        que.pop();
        if(k == wai){
            cout<<cnt;
            break;
        }
        if(wai+1>=0 && wai+1<100001){
            if(!vis[wai+1]){
                vis[wai+1] = true;
                que.push(make_pair(wai+1, cnt+1));
            }
        }
        if(wai-1>=0 && wai-1<100001){
            if(!vis[wai-1]){
                vis[wai-1] = true;
                que.push(make_pair(wai-1, cnt+1));
            }
        }
        if(2*wai>=0 && 2*wai<100001){
            if(!vis[wai*2]){
                vis[wai*2] = true;
                que.push(make_pair(wai*2, cnt+1));
            }
        }
    }
}


int main(){

    cin >> n >> k;
    vis[n] = true;
    bfs(n);
    return 0;
}