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
}
int main(){
	int testcases;
	int ans[101];
	int n;
	int arr[1001][2];
	char path[1001];
	scanf("%d",&testcases);
	int check;
	int d;//xi-xi-1
	int t;//yi-yi-1
	int pathlength=0;
	for(int j=0;j<testcases;j++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d%d",&arr[i][0],&arr[i][1]);
		}
		qsort(arr, n, sizeof *arr, comparator);
		check=1;
		d=arr[0][0];
		t=arr[0][1];
		pathlength=d+t;
		for(int k=0;k<d;k++){
			path[k]='R';
		}
		for(int k=0;k<t;k++){
			path[d+k]='U';
		}
		for(int i=1,m=d+t;i<n;i++){
			if(arr[i][1]<arr[i-1][1]){
				check=0;
				break;
			}
			else{
				d=arr[i][0]-arr[i-1][0];
				t=arr[i][1]-arr[i-1][1];
				for(int k=0;k<d;k++){
					path[m+k]='R';
				}
				m=m+d;
				for(int k=0;k<t;k++){
					path[m+k]='U';
				}
				m=m+t;
			}
			pathlength=m;
		}
		if(check==0){
			printf("NO\n");
		}
		else{
			printf("YES\n");
			for(int k=0;k<pathlength;k++){
				printf("%c",path[k]);
			}
			printf("\n");
		}
	}
	return 0;
}