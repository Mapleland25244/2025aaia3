// week02-1b.cpp
// SOIT106_ADVANCE_001
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x = n; // backup
	int ans = 0;
	while(x>0){ // Bo-Pi Fa
		ans = x%10 + ans*10;
		x /= 10;
	}
	printf("%d+%d=%d\n",n,ans,n+ans);
}
