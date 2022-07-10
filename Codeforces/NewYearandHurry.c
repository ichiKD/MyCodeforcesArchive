#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	k=240-k;
	int count=0;
	for(int i=1;i<=n;i++){
		if(k<5*i*(i+1)/2){
			break;
		}
		count=count+1;
	}
	printf("%d",count);
	return 0;
}