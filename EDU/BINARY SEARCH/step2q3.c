#include<stdio.h>
#include <stdlib.h>

long long int n;
long long int a[2];

int comparator(const void *p, const void *q) {
	return ( *(long long int*)p - *(long long int*)q );
}
int good(int mid){
	return mid/a[0]+mid/a[1]>=n;
}
int main(){
	long long int low, high, mid;
	scanf("%d%d%d",&n, &a[0], &a[1]);
	qsort(a, 2, sizeof(long long int), comparator);
	if(n<=2){
		printf("%d",n*a[0]);
	}
	else{
		n=n-1;
		low=0;				//good(low)  = 0
		high=4000000000;	//good(high) = 1
		while(high>low+1){
			mid=(low+high)/2;
			if(good(mid)){
				high=mid;
			}
			else{
				low=mid;
			}
		}
		printf("%lld",high+a[0]);
	}
	return 0;
}