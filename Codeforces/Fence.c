#include<stdio.h>
int main(){
	int n,k;
	int fence[160000];
	int cdf[160000];
	scanf("%d%d",&n,&k);
	scanf("%d",&fence[0]);
	cdf[0]=fence[0];
	for(int i=1;i<n;i++){
		scanf("%d",&fence[i]);
		cdf[i]=cdf[i-1]+fence[i];
	}
	int min=cdf[k-1],index=0;
	for(int i=k;i<n;i++){
		if(min>cdf[i]-cdf[i-k]){
			min=cdf[i]-cdf[i-k];
			index=i-k+1;
		}
	}
	printf("%d",index+1);
	return 0;
}