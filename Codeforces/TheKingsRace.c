#include<stdio.h>

int main(){
	long long int N,x,y;
	scanf("%lld",&N);
	scanf("%lld%lld",&x,&y);
	(y+x-1<=N)?printf("White"):printf("Black");
	return 0;
}