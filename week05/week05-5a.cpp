// week05-5a.cpp
// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;
int main(){
	int now;
	cin >> now;
	int max=now,min=now;
	for(int i=0;i<5;i++){
		cin >> now;
		if(max < now) max = now;
		if(min > now) min = now;
	}
	int ans = max - min;
	cout << ans;
}
