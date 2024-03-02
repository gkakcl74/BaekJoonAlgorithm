#include <iostream>
using namespace std;

int main(){
    int n, m, t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>m;
        int bridge = 1;
        for(int i=0; i<n; i++){
            bridge *= m-i;
            bridge /= i+1; 
        }
        cout<<bridge<<"\n";
    }
}