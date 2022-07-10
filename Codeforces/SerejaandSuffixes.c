#include<stdio.h>
int main(){
	int n,m;
	int arr1[100200]={0},sol[100200];
	scanf("%d%d",&n,&m);
	int temp;
	int rev[100200]={0},store[100200]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=1;i<=n;i++){
		if(rev[arr1[n-i]]==0){
			rev[arr1[n-i]]=1;
			store[n-i]=store[n+1-i]+1;
		}
		else{
			store[n-i]=store[n+1-i];
		}
	}
	int temp2;
	for(int i=0;i<m;i++){
		scanf("%d",&temp2);
		sol[i]=store[temp2-1];
	}
	for(int i=0;i<m;i++){
		printf("%d\n",sol[i]);
	}
	return 0;
}