#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][3];
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&arr[i][0],&arr[i][1],&arr[i][2]);
		if(arr[i][0]*arr[i][1]||arr[i][0]*arr[i][2]||arr[i][1]*arr[i][2]){
			++count;
		}
	}
	printf("%d",count);
	return 0;
}