#include <iostream>
#include <queue>
using namespace std;

int a, b, c;
priority_queue<int, vector<int>, greater<int> > pq;
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    while(pq.size() > 1){
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        c += a+b;
        pq.push(a+b);
    }
    cout<<c;
    return 0;
}