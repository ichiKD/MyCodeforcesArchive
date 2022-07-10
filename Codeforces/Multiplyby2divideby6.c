#include<stdio.h>
int main(){
	int testcases, x=0, y=0;
	scanf("%d", &testcases);
	int arr[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<testcases;i++){
		x=0;
		y=0;
		for(int j=0;arr[i]%2==0;j++){
			arr[i]/=2;
			x+=1;
		}
		for(int j=0;arr[i]%3==0;j++){
			arr[i]/=3;
			y+=1;
		}
		if(arr[i]==1&&y>=x){
			printf("%d\n", 2*y-x);
		}
		else{printf("-1\n");}
	}
	return 0;
}