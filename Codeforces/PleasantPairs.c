#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int count;
	int arr[405001];
	while(testcases--){
		count=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=arr[i]-i-2;j<n;j+=arr[i]){
				if(i==j||j<0){
					continue;
				}
				else if(arr[i]*arr[j]==i+j+2&&j<n){
					count=count+1;
				}
			}
		}
		printf("%d\n",count/2);
	}
	return 0;
}