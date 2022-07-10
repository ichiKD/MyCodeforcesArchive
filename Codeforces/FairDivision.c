#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int arr[testcases];
	int a;
	int sum1[testcases];
	int sum2[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%d",&arr[i]);
		sum1[i]=0;
		sum2[i]=0;
		for(int j=0;j<arr[i];j++){
			scanf("%d",&a);
			if(a==1){sum1[i]=sum1[i]+1;}
			else{sum2[i]=sum2[i]+1;}
		}
	}
	for(int i=0;i<testcases;i++){
		if(sum1[i]%2==1){
			printf("NO\n");
		}
		else if(sum1[i]==0&&sum2[i]%2==1){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}