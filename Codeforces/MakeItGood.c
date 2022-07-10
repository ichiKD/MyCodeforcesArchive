#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int arr[testcases];
	int temp[200000];
	int jx[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%d",&arr[i]);
		for(int j=0;j<arr[i];j++){
			scanf("%d",&temp[j]);
		}
		jx[i]=arr[i]-1;
		for(int j=arr[i]-1;j>0;j--){
			if(temp[j]<=temp[j-1]){
				jx[i]=j-1;
			}
			else{
				break;
			}
		}
		for(int j=jx[i];j>0;j--){
			if(temp[j-1]<=temp[j]){
				jx[i]=j-1;
			}
			else{
				break;
			}
		}
	}
	for(int i=0;i<testcases;i++){
		printf("%d\n",jx[i]);
	}
	return 0;
}