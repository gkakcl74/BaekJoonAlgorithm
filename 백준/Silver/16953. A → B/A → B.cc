#include <iostream>
#include <queue>
using namespace std;
queue<pair<long long, long long>>q;

int bfs(long long A, long long B){
    q.push(make_pair(A, 1));
    
    while(!q.empty()){
        pair<long long, long long> que = q.front();    
        q.pop();
        if(que.first == B){
            return que.second;
        }
        if(que.first * 2 <= B){
            q.push(make_pair(que.first * 2, que.second + 1));
        }
        if((que.first * 10) + 1 <= B){
            q.push(make_pair((que.first * 10) + 1, que.second + 1));
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin>>a>>b;
    cout<<bfs(a, b);
}