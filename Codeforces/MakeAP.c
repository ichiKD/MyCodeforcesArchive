#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int arr[testcases][3];
	for(int i=0; i<testcases; i++){
		scanf("%d%d%d",&arr[i][0],&arr[i][1],&arr[i][2]);
	}
	for(int i=0; i<testcases; i++){
		if((arr[i][0]+arr[i][2])%(2*arr[i][1])==0)
		{
			printf("YES\n");
		}
		else if((2*arr[i][1]-arr[i][2])%arr[i][0]==0&&2*arr[i][1]-arr[i][2]>0){
			printf("YES\n");
		}
		else if((2*arr[i][1]-arr[i][0])%arr[i][2]==0&&2*arr[i][1]-arr[i][0]>0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		};
	}
	return 0;
}