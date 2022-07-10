#include<stdio.h>
int main(){
	int x1,x2,y1,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int a;
	if(x2==x1){
		a=y2-y1;
		printf("%d %d %d %d",x1+a,y1,x1+a,y1+a);
	}
	else if(y2==y1){
		a=x2-x1;
		printf("%d %d %d %d",x1,y1+a,x1+a,y1+a);
	}
	else if(x2-x1==y2-y1){
		a=y2-y1;
		printf("%d %d %d %d",x1+a,y1,x1,y1+a);
	}
	else if(x2-x1==y1-y2){
		a=y2-y1;
		printf("%d %d %d %d",x1,y1+a,x1-a,y1);
	}
	else{
		printf("-1");
	}
	return 0;
}