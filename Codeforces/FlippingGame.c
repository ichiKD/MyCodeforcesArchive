#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[102];
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==1){
			count=count+1;
		}
	}
	int m=0,b[102]={0};
	for(int i=0,j=0;i<n;i++){
		if(a[i]==0){
			b[j]+=1;
		}
		else{
			b[j]-=1;
		}
		if(a[i]!=a[i+1]){
			j++;
		}
		m=j;
	}
	m=m+1;
	int maxsum=0,sumi=0;
	for(int i=0;i<m;i++){
		sumi=sumi+b[i];
		if(maxsum<=sumi){
			maxsum=sumi;
		}
		if(sumi<0){
			sumi=0;
		}
	}
	if(count==n){
		printf("%d",n-1);
	}
	else{
		printf("%d",maxsum+count);
	}
	return 0;
}