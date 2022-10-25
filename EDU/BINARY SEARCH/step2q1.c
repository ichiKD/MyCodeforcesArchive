#include<stdio.h>
long long int max(long long int a, long long int b){
	if(a>b) {
		return a;
	}
	else {
		return b;
	}
}
int main(){
	long long int w, h, n ;
	long long int low ,high, mid;
	long long int ans;
	scanf("%lld%lld%lld",& w, &h, &n);
	low=0;
	high=1; // high=max(a,b)*n;
	
	while((high/w)*(high/h)<n){
		high=high*2;
	}
	while(high>low+1){
		mid=(low+high)/2;
		if((mid/w)*(mid/h)<n){
			low=mid;
		}
		else{
			high=mid;
		}
	}
	printf("%lld",high);
	return 0;
}