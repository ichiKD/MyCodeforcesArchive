#include<stdio.h>
int main(){
	long long int N, k;
	scanf("%lld%lld",&N,&k);
	if(2*k<=N+1){printf("%lld",2*k-1);}
	else{printf("%lld",2*(k-(N+1)/2));}
	return 0;
}