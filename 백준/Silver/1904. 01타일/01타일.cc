#include <iostream>
using namespace std;

long long int arr[1000001];
int main(){
    int n; cin>>n;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for(long long int i=3; i<1000001; i++){
        arr[i] = (arr[i-1] + arr[i-2]) % 15746;
    }
    cout<<arr[n] % 15746;
}

