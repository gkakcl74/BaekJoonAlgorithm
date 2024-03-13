#include <iostream>
using namespace std;

int main(){
    int e = 0, s = 0, m = 0, year = 0;
    int e1, s1, m1;
    cin>>e1>>s1>>m1;
    while(true){
        if(e == e1 && s == s1 && m == m1) break;
        year++;
        e++;
        s++;
        m++;
        if(e>15) e = 1;
        if(s>28) s = 1;
        if(m>19) m = 1;
    }
    cout<<year;
}