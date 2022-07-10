#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int n,l;
	scanf("%d%d",&n,&l);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr, n, sizeof(int), comparator);
	int d=0;
	for(int i=1;i<n;i++){
		if(d<arr[i]-arr[i-1]){
			d=arr[i]-arr[i-1];
		}
	}
	if(d<2*arr[0]){
		d=2*arr[0];
	}
	if(d<2*(l-arr[n-1])){
		d=2*(l-arr[n-1]);
	}
	printf("%.10lf",d/2.0);
	return 0;
}