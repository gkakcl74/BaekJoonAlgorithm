#include <iostream>
#include <math.h>
using namespace std;

int house[1001][3] = {0,};
int housecos[3];
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>housecos[0]>>housecos[1]>>housecos[2];
        house[i][0] += min(house[i-1][1], house[i-1][2]) + housecos[0]; // R
        house[i][1] += min(house[i-1][0], house[i-1][2]) + housecos[1]; // G
        house[i][2] += min(house[i-1][0], house[i-1][1]) + housecos[2]; // B
    }
    cout<<min(house[n][0], min(house[n][1], house[n][2]));
}