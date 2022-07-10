#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	long long int n;
	while(testcases--){
		scanf("%lld",&n);
		n=n/2;
		printf("%lld\n",4*n*(n+1)*(2*n+1)/3);
	}
	return 0;
}