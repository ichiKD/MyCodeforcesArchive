#include<stdio.h>
int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	if(t==10){
		if(n==1){
			printf("-1");
		}
		else{
			printf("10");
			n=n-2;
			for(int i=0;i<n;i++){
				printf("0");
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			printf("%d",t);
		}
	}
	return 0;
}