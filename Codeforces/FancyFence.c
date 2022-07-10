#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int arr[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<testcases;i++){
		if(360%(180-arr[i])==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}