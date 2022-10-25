#include<stdio.h>
#include<math.h>
int T[120]; //divisor array
int main(){
	int testcases;
	int n,k;
	int length;
	int temp;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&k);
		if(k>=n){
			printf("1\n");
		}
		else{
			temp=sqrt(n);
			T[1]=1;
			length=1;
			for(int i=2;i<=temp;i++){
				if(n%i==0){
					length++;
					T[length]=i;
				}
			}
			for(int i=length+1;i<=2*length;i++){
				T[i]=n/T[2*length+1-i];
			}
			/*
			for(int i=1;i<=2*length;i++){
				printf("%d ",T[i]);
			}
			*/
			for(int i=2*length;i>0;i--){
				if(T[i]<=k){
					printf("%d",n/T[i]);
					break;
				}
			}
		}
	}
	return 0;
}