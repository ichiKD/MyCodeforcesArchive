#include <stdio.h>
#include<math.h>
int main(){
	int testcases;
	long long int n, x, sum;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld",&x);
		n=((long long int)sqrt(1+8*x)-1)/2;
		n=n+1;
		sum=n*(n+1)/2;
		if(x==sum-n){
			printf("%lld\n",n-1);
		}
		else if(x==sum-1){
			printf("%lld\n",n+1);
		}
		else{
			printf("%lld\n",n);
		}
	}
	return 0;
}