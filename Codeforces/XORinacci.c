#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	int arr[T][3];
	int answers[T];
	for(int i=0; i<T; i++){
		scanf("%d%d%d",&arr[i][0],&arr[i][1],&arr[i][2]);
		if(arr[i][2]%3==0){
			answers[i]=arr[i][0];
		}
		else if(arr[i][2]%3==1){
			answers[i]=arr[i][1];
		}
		else{
			answers[i]=arr[i][0]^arr[i][1];
		}
	}
	for(int i=0; i<T; i++){
		printf("%d\n",answers[i]);
	}
	return 0;
}