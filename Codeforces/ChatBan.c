#include<stdio.h>
#include<math.h>
int main(){
	int testcases;
	long long int k, x, sol;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld%lld",&k,&x);
		if(k*k<=x){
			sol=2*k-1;
		}
		else if(x<=k*(k+1)/2){
			sol=(sqrt(1+8*x)-1)/2;
			if(sol*(sol+1)/2<x){
				sol+=1;
			}
		}
		else{
			x=x-k*(k+1)/2;
			sol=(2*k-1-sqrt((2*k-1)*(2*k-1)-8*x))/2;
			if(sol*k-sol*(sol+1)/2<x){
				sol+=1;
			}
			sol=sol+k;
		}
		printf("%lld\n",sol);
	}
	return 0;
}