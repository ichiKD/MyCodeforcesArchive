#include<stdio.h>
int main(){
	int arr[5];
	int sum=0;
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	if(sum%5==0&&sum>0){
		printf("%d",sum/5);
	}
	else{
		printf("-1");
	}
	return 0;
}