#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n, T, max, d;
	int arr[100001];
	for(int i=0;i<testcases;i++){
		scanf("%d",&n);
		d=0;
		T=0;
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		max=arr[0];
		for(int j=0;j<n;j++){
			if(max<arr[j]){
				max=arr[j];
			}
			if(d<max-arr[j]){
				d=max-arr[j];
			}
		}
		while(d){
			T=T+1;
			d=d/2;
		}
		printf("%d\n",T);
	}
	return 0;
}