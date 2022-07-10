#include<stdio.h>
int main(){
	int testcases;
	int n,k;
	scanf("%d",&testcases);
	k=3;
	while(testcases--){
		scanf("%d%d",&n,&k);
		if(n%4==0){
			printf("%d %d %d\n",n/2,n/4,n/4);
		}
		else if(n%2==0){
			printf("%d %d %d\n",n/2-1,n/2-1,2);
		}
		else{
			printf("%d %d %d\n",n/2,n/2,1);
		}
	}
	return 0;
}
//		4t=2t+t+t
//		4t+2=2t+2t+2
//		4t+1=2t+2t+1
//		4t+3=(2t+1)+(2t+1)+1