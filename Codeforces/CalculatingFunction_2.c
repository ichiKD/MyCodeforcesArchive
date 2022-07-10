#include<stdio.h>
int function(long long int num){
	if (num%2==0){
		return num;
	}
	else{
		return -num;
	}
}

int main(){
	long long int n;
	scanf("%lld",&n);
	long long int S=0;
	for(int j=0;j<=n;j++){
		S=S+function(j);
	}
	printf("%lld",S);
}