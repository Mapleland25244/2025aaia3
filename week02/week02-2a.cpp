// week02-2a.cpp
// SOIT106_ADVANCE_001 Using C++
#include <iostream> // cin cout
#include <String> // string
using namespace std;
int main(){
	string a;
	string ans;
	cin >> a;
	int N = a.length();
	for(int i=N-1;i>=0;i--){
		ans += a[i];
	}
	cout << ans;
}
