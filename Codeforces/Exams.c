#include<stdio.h>
#include <stdlib.h>
int comparator(const void *a, const void *b){
	const int * const ia = a, * const ib = b;
	if(ia[0] < ib[0]){
		return -1;
	}
	else if(ia[0]==ib[0]){
		if(ia[1] < ib[1]){
			return -1;
		}
		else{
			return (ia[1]>ib[1]);
		}
	}
	else{
		return 1;
	}
	//return ia[0] < ib[0] ? -1 : ia[0] > ib[0];
}
int main(){
	int n;
	int a[6000][2];
	int date;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d", &a[i][0], &a[i][1]);
	}
	qsort(a, n, sizeof *a, comparator);
	date=a[0][1];
	for(int i=1;i<n;i++){
		if(a[i][1]>=date){
			date=a[i][1];
		}
		else{
			date=a[i][0];
		}
	}
	printf("%d", date);
	return 0;
}