// week06-2a.cpp
// SOIT106_ADVANCE_009
#include <iostream>
using namespace std;

int f(int n){
	int x = n,rN = 0;
	while(x>0){
		rN = rN*10 + x%10;
		x /= 10;
	}
	return rN;
}

int main(){
	int n;
	cin >> n;
	cout << f(n) << endl;
}
