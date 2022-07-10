#include<stdio.h>
int main(){
	int testcases;
	long long int n,r;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld%lld",&n,&r);
		if(r<n){
			printf("%lld\n",r*(r+1)/2);
		}
		else{
			printf("%lld\n",n*(n-1)/2+1);
		}
	}
	return 0;
}