#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    int n; cin>>n;
    int i=1;
    int temp;
    stack<int>stk;
    vector<char> result;
    for(int I=0; I<n; I++){
        cin>>temp;
        while (i <= temp){ // 입력받은 수 보다 스텍에 있는 수가 작을때
            stk.push(i);
            i++;
            result.push_back('+');
        }
        if(stk.top() == temp){ // 입력받은 수가 스텍에 있는 top과 같을떄
            stk.pop();
            result.push_back('-');
        }
        else{ // 스텍의 탑이 입력받은 수와 다를때
            cout<<"NO"; return 0;
        }
    }
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<'\n';
    }

    
}