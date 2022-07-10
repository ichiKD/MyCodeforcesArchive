#include<stdio.h>
int main(){
	int n;
	int arr[200500]={0};
	int path[200500];
	int pathlength=0;
	int tar;
	arr[1]=1;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		scanf("%d",&arr[i+1]);
	}
	pathlength=1;
	path[0]=n;
	tar=arr[n];
	while(tar!=1){
		path[pathlength]=tar;
		pathlength+=1;
		tar=arr[tar];
	}
	if(n!=1){
		path[pathlength]=tar;
		pathlength+=1;
	}
	for(int i=0;i<pathlength;i++){
		printf("%d ",path[pathlength-i-1]);
	}
	return 0;
}