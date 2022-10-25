#include <stdio.h>
#include <string.h>

long long  m, n;
long long  a[1050][3];
long long  b[1050];

long long int min(long long int a, long long int b){
	if(a<b)
		return a;
	else
		return b;
}
int good(long long int mid){
	long long int q,r,gsum;
	gsum=0;
	for(int i=0;i<n;i++){
		q=mid/(a[i][0]*a[i][1]+a[i][2]);
		r=mid%(a[i][0]*a[i][1]+a[i][2]);
		gsum+=a[i][1]*q + min(r/a[i][0],a[i][1]);
	}
	if(gsum>=m){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	long long int low, high, mid;
	long long int sum;
	scanf("%d%d",&m, &n);
	for(int i=0;i<n;i++){
		scanf("%lld%lld%lld",&a[i][0],&a[i][1],&a[i][2]);
	}
	low=-1;
	high=100000000000000;
	while(high>low+1){
		mid=(low+high)/2;
		if(good(mid)){
			high=mid;
		}
		else{
			low=mid;
		}
	}
	memset(b, 0, sizeof(b));
	sum=0;
	for(int i=0;i<n;i++){
		long long int q,r;
		q=high/(a[i][0]*a[i][1]+a[i][2]);
		r=high%(a[i][0]*a[i][1]+a[i][2]);
		b[i]=a[i][1]*q + min(r/a[i][0],a[i][1]);
		sum+=b[i];
		if(sum>=m){
			b[i]=b[i]-(sum-m);
			break;
		}
	}
	printf("%lld\n",high);
	for(int i=0;i<n;i++){
		printf("%lld ",b[i]);
	}
	return 0;
}