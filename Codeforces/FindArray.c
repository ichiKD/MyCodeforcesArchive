#include<stdio.h>
int main(){
	int testcases;
	scanf("%d", &testcases);
	int arr[testcases];
	int maxofarr=0;
	for(int i=0; i<testcases;i++){
		scanf("%d",&arr[i]);
		arr[i]++;
	}
	for(int i=0; i<testcases;i++){
		for(int j=2; j<=arr[i];j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}