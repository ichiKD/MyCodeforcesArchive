#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int arr[60];
	int count1,count0,x;
	while(testcases--){
		count1=count0=x=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		qsort(arr, n, sizeof(int), comparator);
		for(int i=0;i<n;i++){
			if(arr[i]%2){
				count1++;
			}
			else{
				count0++;
			}
		}
		for(int i=1;i<n;i++){
			if(arr[i]==arr[i-1]+1){
				x++;
			}
		}
		if(count1%2==0||x>=1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}