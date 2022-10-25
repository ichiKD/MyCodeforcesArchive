#include<stdio.h>
int main(){
	int testcases;
	int n;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		if(n%2==0){
			for(int i=1;i<=n;i+=2){
				printf("%d %d ",i+1,i);
			}
			printf("\n");
		}
		else{
			printf("1 ");
			for(int i=2;i<=n;i+=2){
				printf("%d %d ",i+1,i);
			}
			printf("\n");
		}
	}
	return 0;
}