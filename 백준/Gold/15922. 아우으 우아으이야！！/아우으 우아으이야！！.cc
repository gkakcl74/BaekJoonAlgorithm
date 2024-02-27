#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
vector<pair<int, int> > arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        int a,b;
        cin >> a >> b;
        arr.push_back({a,b});
    }
    sort(arr.begin(), arr.end());
    
	int sb = 0, x, x1;
    int start = arr[0].first, end = arr[0].second;
    for(int i=1 ; i<n ; i++){
    	x = arr[i].first, x1 = arr[i].second;
    	if(arr[i].first < end){ //선분들을 비교한다. 여기서 first가 end보다 작다면 선분이 겹치는거다
    		end = max(x1, end);  // 더 멀리있는 끝부분을 end로 정한다. 
		}
		else{  // 위에서 걸리지 않았다는 것은 독립적인 선분 하나를 찾으것 
			sb += end - start; 
			start = x;
			end = x1;
		} /* 더 뒤에 겹치는게 나올수 있지 않냐 생각할 수 있지만 이미 소트를 해논 상태기에 
		    if문에서 걸리지 않았다면 더이상 겹칠수가 없다. */ 
		    
	} 
	sb += end - start;
	
	cout << sb;
	return 0;
}