#include<stdio.h>
int main(){
	int n, m, a, b;
	scanf("%d%d%d%d", &n, &m, &a, &b);
	int k=n/m, r=n%m;
	if(a*m<=b){
		printf("%d", a*n);
	}
	else if(a*r<=b){
		printf("%d",b*k+a*r );
	}
	else{
		printf("%d",b*(k+1) );
	}
	return 0;
}