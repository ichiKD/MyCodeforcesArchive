#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int count;
	int t;
	int arr[200001];
	for(int i=0;i<testcases;i++){
		count=0;
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		for(int j=0;j<n;j++){
			t=2*n/arr[j];
			for(int k=j+1;k<t;k++){
				if(arr[j]*arr[k]==j+k+2){
					count=count+1;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}