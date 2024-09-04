#include <iostream>
using namespace std;

int main(){
    int arr[6] = {0,};
    arr[0] = 2;
    int n;
    cin>>n;

    for(int i=1 ;i<=5; i++){
        arr[i] = arr[i-1] * 2;
    }
    cout<<arr[n-1];
}