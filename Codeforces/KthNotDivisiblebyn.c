#include<stdio.h>
int func(int n,int k){
	if(k<n){return k;}
	else{return k/n*n+func(n,k%n+k/n);}
}
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n[testcases],k[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%d%d",&n[i],&k[i]);
	}
	for(int i=0;i<testcases;i++){
		printf("%d\n",func(n[i],k[i]));
	}
	return 0;
}