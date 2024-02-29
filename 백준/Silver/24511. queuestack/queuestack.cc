#include <iostream>
#include <deque>
using namespace std;

bool qs[100001];
deque<int>dq;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp;
    int n, m; cin>>n;
    for(int i=0; i<n; i++){
        cin>>qs[i];
    }
    for(int i=0; i<n; i++){
        cin>>temp;
        if(qs[i] == 0){
            dq.push_back(temp);
        }
        
    }
    cin>>m;
    int result;
    for(int i=0; i<m; i++){
        cin>>temp;  
        dq.push_front(temp);
        result = dq.back();
        dq.pop_back();
        cout<<result<<" ";
    }
}