#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x=0;
	char op[40];
	for(int i=0;i<n;i++){
		scanf("%s",op);
		if(op[1]=='+'){
			x=x+1;
		}
		else{
			x=x-1;
		}
	}
	printf("%d",x);
	return 0;
}