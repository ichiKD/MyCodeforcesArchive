#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n[101];
	int arr[1024];
	int ans[101];
	int a,b,check;
	for(int i=0;i<testcases;i++){
		scanf("%d",&n[i]);
		check=1;
		for(int j=0;j<n[i];j++){
			scanf("%d",&arr[j]);
		}
		a=arr[0]%2;
		b=arr[1]%2;
		for(int j=2;j<n[i];j++){
			if(j%2==0){
				if(a!=arr[j]%2){
					check=0;
					break;
				}
			}
			else{
				if(b!=arr[j]%2){
					check=0;
					break;
				}
			}
		}
		ans[i]=check;
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