#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int hours=0;
	int bc=a;
	for(int i=0;a>0;i++){
		hours=hours+a;
		a=bc/b;
		bc=bc/b+bc%b;
	}
	printf("%d",hours);
	return 0;
}