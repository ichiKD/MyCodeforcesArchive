#include<stdio.h>
int main(){
	long long int m,n,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	long long int k=n/a,l=m/a,d=n%a,e=m%a;
	if(d==0&&e==0){
		printf("%lld",k*l);
	}
	else if(d==0){
		printf("%lld",k*l+k);
	}
	else if(e==0){
		printf("%lld",k*l+l);
	}
	else{
		printf("%lld",k*l+k+l+1);
	}
	return 0;
}