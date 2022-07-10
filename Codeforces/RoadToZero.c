#include<stdio.h>
int main(){
	int testcases=0;
	scanf("%d",&testcases);
	long long int arr[testcases][4];
	for(int i=0; i<testcases; i++){
		scanf("%lld%lld%lld%lld",&arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	}
	for(int i=0; i<testcases; i++){
		if(2*arr[i][2]>arr[i][3]){
			if(arr[i][0]>arr[i][1]){
				printf("%lld\n",arr[i][1]*(arr[i][3]-arr[i][2])+arr[i][2]*arr[i][0]);
			}
			else{
				printf("%lld\n",arr[i][0]*(arr[i][3]-arr[i][2])+arr[i][2]*arr[i][1]);
			}
		}
		else{
			printf("%lld\n",(arr[i][0]+arr[i][1])*arr[i][2]);
		}
	}
	return 0;
}