#include<stdio.h>
#include<math.h>
int p[100500];
void compute(int n){
	if(n<=0){
		return;
	}
	int a=n-1;
	int temp=sqrt(a);
	if(a==temp*temp){
		for(int i=0;i<n;i++){
			p[i]=a-i;
		}
		return;
	}
	else{
		temp=(temp+1)*(temp+1);
		for(int i=temp-a;i<n;i++){
			p[i]=temp-i;
		}
		compute(temp-a);
		return;
	}
}
int main(){
	int testcases;
	int n;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		compute(n);
		for(int i=0;i<n;i++){
			printf("%d ",p[i]);
		}
		printf("\n");
	}
	return 0;
}