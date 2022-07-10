#include<stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	int m=sqrt(1+8*x)-1;
	m=m/2;
	char string[x];
	scanf("%s",string);
	for(int i=1; i<=m;i++){
		printf("%c", string[i*(i-1)/2]);
	}
	return 0;
}