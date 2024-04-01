#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, kim, eim, round = 0;
    cin>>N>>kim>>eim;
    while(kim!=eim){
        if(!N){
            cout<<-1;
            return 0;
        }
        round++;
        kim = (kim+1) /2;
        eim = (eim+1) /2;
        N/=2;
    }
    cout<<round;
    return 0;
}
