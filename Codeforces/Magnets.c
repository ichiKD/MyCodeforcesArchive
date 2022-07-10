#include<stdio.h>
int main(){
	int n;
	int arr[102000];
	scanf("%d",&n);
	int group=1;
	scanf("%d",&arr[0]);
	for(int i=1;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]!=arr[i-1]){
			group+=1;
		}
	}
	printf("%d",group);
	return 0;
}