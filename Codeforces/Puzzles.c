#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[m];
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr, m, sizeof(int), comparator);
	int min =arr[n-1]-arr[0];
	for(int i=n;i<m;i++){
		if(min>arr[i]-arr[i-n+1]){
			min=arr[i]-arr[i-n+1];
		}
	}
	printf("%d",min);
	return 0;
}