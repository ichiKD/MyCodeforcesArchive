#include<stdio.h>
#include <stdlib.h>

int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}

int max(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	int testcases;
	int n, k, index;
	long long int ans;
	int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(int), comparator);
		ans=0;
		if(a[0]>=0){
			for(int i=n-1;0<=i;i-=k){
				ans+=2*a[i];
			}
			ans=ans-a[n-1];
		}
		else if(a[n-1]<0){
			for(int i=0;i<n;i+=k){
				ans+=-2*a[i];
			}
			ans=ans+a[0];
		}
		else{
			for(index=0;a[index]<0&&index<n;index+=k){
				ans+=-2*a[index];
			}
			for(index=n-1;a[index]>0&&index>=0;index-=k){
				ans+=2*a[index];
			}
			ans-=max(-a[0], a[n-1]);
		}
		printf("%lld\n", ans);
	}
	return 0;
}