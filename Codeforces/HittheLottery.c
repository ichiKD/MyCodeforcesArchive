#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int n1=0,n5=0,n10=0,n20=0,n100=0;
	n100=n/100;
	n20=n/20-n100*5;
	n10=n/10-n100*10-n20*2;
	n5=n/5-n100*20-n20*4-n10*2;
	n1=n-n100*100-n20*20-n10*10-n5*5;
	printf("%d",n1+n5+n10+n20+n100);
	return 0;
}