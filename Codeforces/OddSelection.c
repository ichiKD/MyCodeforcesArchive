//spegetti code

#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n[101],x[101];
	int ans[101]={0};
	int arr[1000];
	int count=0;
	int count1=0;
	for(int i=0;i<testcases;i++){
		count=0;
		scanf("%d%d",&n[i],&x[i]);
		for(int j=0;j<n[i];j++){
			scanf("%d",&arr[j]);
			arr[j]=arr[j]%2;
			if(arr[j]==0){
				count=count+1;
			}
		}
		count1=n[i]-count;
		if(count>=x[i]-1){
			if(count1>=1){
				ans[i]=1;
			}
			else{
				ans[i]=0;
			}
		}
		else if(count==0){
			if(x[i]%2==0){
				ans[i]=0;
			}
			else{
				ans[i]=1;
			}
		}
		else{
			if(x[i]+1<=count1+count){
				ans[i]=1;
			}
			else if(x[i]==count+count1&&count1%2==1){
				ans[i]=1;
			}
			else{
				ans[i]=0;
			}
		}
	}
	for(int i=0;i<testcases;i++){
		if(ans[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}