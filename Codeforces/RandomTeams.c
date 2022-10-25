#include<stdio.h>
int main(){
	long long int m,s;
	long long int kmin,kmax;
	scanf("%lld%lld",&m,&s);
	kmax=(m+1-s)*(m-s)/2;
	kmin=(s-m%s)*(m/s)*(m/s-1)/2 + (m%s)*(m/s+1)*(m/s)/2;
	printf("%lld %lld\n",kmin,kmax);
	return 0;
}