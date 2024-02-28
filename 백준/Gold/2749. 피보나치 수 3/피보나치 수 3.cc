#include <iostream>
using namespace std;
typedef long long ll;
const long long int MAX = 1000000;
ll arr[1500000];
int main(){
    long long int n; 
    cin>>n;

    arr[0] = 0;
    arr[1] = 1;
    for(long long int i=2; i<1500000; i++){
        arr[i] = (arr[i-1] + arr[i-2] ) % MAX;
    }
    cout<<arr[n%1500000];
}