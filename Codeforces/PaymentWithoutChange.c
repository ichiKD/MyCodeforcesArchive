#include<stdio.h>
int main(){
	int q=0;
	scanf("%d",&q);
	long long int arr[q][4];
	for(int i=0;i<q;i++){
		scanf("%lld%lld%lld%lld",&arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	}
	for(int i=0;i<q;i++){
		if(arr[i][0]*arr[i][2]+arr[i][1]<arr[i][3]){
			printf("NO\n");
		}
		else if(arr[i][3]%arr[i][2]<=arr[i][1]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}