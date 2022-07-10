#include<stdio.h>
int max(int x,int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int t1=a+b+c,t2=a*c+b*c,t3=a*b+a*c,t4=a*b*c;
	printf("%d",max(max(max(t1,t2),t3),t4));
	return 0;
}