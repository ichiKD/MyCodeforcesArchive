#include<stdio.h>
int main(){
	long long int N;
	int k;
	scanf("%lld",&N);
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		if(N%10==0){
			N=N/10;
		}
		else{
			N=N-1;
		}
	}
	printf("%lld",N);
	return 0;
}