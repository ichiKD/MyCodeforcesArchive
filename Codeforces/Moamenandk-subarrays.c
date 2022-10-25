#include<stdio.h>
#include<stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int testcases;
	int n, k;
	int temp;
	int low, high, mid;
	int a[100500], b[100500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		qsort(b, n, sizeof(int), comparator);
		temp=1;
		for(int i=0;i<n-1;i++){
			low=-1;
			high=n-1;
			while(high>low+1){
				mid=(low+high)/2;
				if(b[mid]<a[i]){
					low=mid;
				}
				else{
					high=mid;
				}
			}
			if(a[i+1]!=b[high+1]&&high<n-1){
				temp++;
			}
			else if(high==n-1){
				temp++;
			}
		}
		if(temp<=k){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}