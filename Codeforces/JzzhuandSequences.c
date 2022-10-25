#include<stdio.h>
int main(){
	long long int x[6];
	long long int n, ans;
	scanf("%lld%lld",&x[0],&x[1]);
	scanf("%lld",&n);
	n=(n-1)%6;
	x[2]=x[1]-x[0];
	x[3]=-x[0];
	x[4]=-x[1];
	x[5]=-x[2];
	ans=(x[n]+10000000070)%1000000007;
	printf("%lld\n",ans);
	return 0;
}