#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int a,b,c,d;
for(int i=0;a==b||a==c||a==d||b==c||b==d||c==d;i++){
		num=num+1;
		a=num/1000;
		b=num/100-a*10;
		c=num/10-a*100-b*10;
		d=num%10;
		d=num-a*1000-b*100-c*10;
	}
	printf("%d\n",num);
	return 0;
}