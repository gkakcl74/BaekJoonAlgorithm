#include <iostream>
#include <math.h>
using namespace std;

int N, r, c;
int ans = 0;
void solve(int x, int y, int size){
    if(x == c && y == r){
        cout<<ans;
        return;
    }
    else if(c < x+size && r < y+size && c >= x && r >= y){
        solve(x, y, size/2);
        solve(x + size/2, y, size/2);
        solve(x, y + size/2, size/2);
        solve(x +size/2 , y+size/2 , size/2);
    }
    else{
        ans += size*size;
    }
}

int main(){
    cin>>N>>r>>c;
    solve(0, 0, pow(2,N));
    return 0;
}