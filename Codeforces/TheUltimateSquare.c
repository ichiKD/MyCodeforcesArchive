#include<stdio.h>
int main(){
	int testcases;
	long long int n, length;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%lld", &n);
		length=(n+1)/2;
		printf("%lld\n",length);
	}
	return 0;
}