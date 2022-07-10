#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int Test;
	scanf("%d",&Test);
	int array[Test][50];
	int testcase[Test];
	for(int i=0;i<Test;i++){
		scanf("%d",&testcase[i]);
		for(int j=0;j<2*testcase[i];j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	for(int i=0;i<Test;i++){
		qsort(array[i], 2*testcase[i], sizeof(int), comparator);
	}
	
	for(int i=0;i<Test;i++){
		for(int j=0; j<testcase[i]; j++){
			printf("%d ",array[i][j+testcase[i]]);
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}