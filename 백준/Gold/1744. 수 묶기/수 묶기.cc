#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef long long int ll;

vector<int>posnum;
vector<int>negnum;
int ZeroCount = 0;
int result = 0;
int tie(){
    sort(posnum.begin(), posnum.end(), greater<>());
    sort(negnum.begin(), negnum.end(), less<>());
 
    for(int i=0; i<posnum.size() - (posnum.size() % 2); i+=2){
        result += posnum[i] * posnum[i+1];
    }
    if(posnum.size() % 2 == 1){
        result += posnum.back();
    }
    for(int i=0; i<negnum.size() - (negnum.size() % 2); i+=2){
        result += negnum[i] * negnum[i+1];
    }
    if(negnum.size() % 2 == 1){
        if(ZeroCount == 0){
            result += negnum.back();
        }
    }
    return result;
}

int main() {
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int temp; cin>>temp;
        if(temp > 1) {
            posnum.push_back(temp);
        }    
        else if(temp == 1){
            result++;
        }
        else if(temp == 0){
            ZeroCount++;
        }
        else{
            negnum.push_back(temp);
        }
    }
    cout<<tie();
}