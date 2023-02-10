#include <stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(long long int*)p - *(long long int*)q );
}
long long int ab(long long int a){
    if(a>=0){
        return a;
    }
    else{
        return -a;
    }
}
long long int max(long long int a, long long int b){
    if(a>b)
        return a;
    else
        return b;
}
int main(){
	int testcases;
	int count=0;
	long long int n, ans;
	long long int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		count++;
		scanf("%lld", &n);
		for(int i=0; i<n;i++){
			scanf("%lld", &a[i]);
		}
		qsort(a, n, sizeof(long long int), comparator);
		ans=max(a[n-1]+a[n-1]-a[n-2]-a[0], a[n-2]+a[1]-a[0]-a[0]);
		for(int i=0;i<n-2;i++){
			ans=max(ans, a[n-1]-a[i]+a[i+1]-a[i]);
		}
		for(int i=n-1;2<=i;i--){
			ans=max(ans,a[i]-a[0]+a[i]-a[i-1]);
		}
		printf("%lld\n", ans);
	}
	return 0;
}