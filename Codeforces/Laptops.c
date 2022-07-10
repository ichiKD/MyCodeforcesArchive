#include<stdio.h>
#include <stdlib.h>
int comparator(const void *a, const void *b){
	const int * const ia = a, * const ib = b;
	return ia[0] < ib[0] ? -1 : ia[0] > ib[0];
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][2];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	qsort(a, n, sizeof *a, comparator);
	int count=0;
	for(int i=1;i<n;i++){
		if(a[i][0]>a[i-1][0]&&a[i][1]<a[i-1][1]){
			count=1;
			break;
		}
	}
	if(count==1){printf("Happy Alex");}
	else{printf("Poor Alex");}
	return 0;
}