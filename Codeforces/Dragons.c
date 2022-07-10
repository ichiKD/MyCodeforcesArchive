#include<stdio.h>
#include <stdlib.h>
int comparator(const void *a, const void *b){
	const int * const ia = a, * const ib = b;
	return ia[0] < ib[0] ? -1 : ia[0] > ib[0];
}
int main(){
	int n,s;
	scanf("%d%d",&s,&n);
	int arr[1024][2]={0};
	for(int i=0;i<n;i++){
		scanf("%d%d",&arr[i][0],&arr[i][1]);
	}
	qsort(arr, n, sizeof *arr, comparator);
	int check=1;
	for(int i=0;i<n;i++){
		if(s>arr[i][0]){
			s=s+arr[i][1];
		}
		else{
			check=0;
			break;
		}
	}
	if(check){printf("YES");}
	else{printf("NO");}
	return 0;
}