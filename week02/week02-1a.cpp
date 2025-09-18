// week02-1a.cpp
// SOIT106_ADVANCE_001 Using C
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x = n;
	int ans = 0;
	while(x>0){ // Bo-Pi Fa
		ans = x%10 + ans*10;
		x /= 10;
	}
	printf("%d", ans);
}
