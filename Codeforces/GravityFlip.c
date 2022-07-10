#include<stdio.h>
#include<stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int n;
	int array[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	qsort(array,n,sizeof(int),comparator);
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}