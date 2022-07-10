#include<stdio.h>
#include<stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int n,k;
	int array[200500];
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	qsort(array,n,sizeof(int),comparator);
	if(array[k]==array[k-1]){
		printf("-1");
	}
	else if(k==0){
		if(array[0]==1){
			printf("-1");
		}
		else{
			printf("1");
		}
	}
	else{
		printf("%d",array[k-1]);
	}
	return 0;
}