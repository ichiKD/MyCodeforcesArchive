#include<stdio.h>
int main(){
	int testcases;
	int arr[10500][2];
	scanf("%d",&testcases);
	for(int i=0;i<testcases;i++){
		scanf("%d%d",&arr[i][0],&arr[i][1]);
	}
	for(int i=0;i<testcases;i++){
		if(arr[i][0]>=arr[i][1]){
			if(arr[i][1]*2>=arr[i][0]){
				printf("%d\n",4*arr[i][1]*arr[i][1]);
			}
			else{
				printf("%d\n",arr[i][0]*arr[i][0]);
			}
		}
		else{
			if(arr[i][0]*2>=arr[i][1]){
				printf("%d\n",4*arr[i][0]*arr[i][0]);
			}
			else{
				printf("%d\n",arr[i][1]*arr[i][1]);
			}
		}
	}
	return 0;
}