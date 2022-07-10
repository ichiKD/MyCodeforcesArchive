#include<stdio.h>
#include<math.h>
int main(){
	int num;
	scanf("%d",&num);
	num=num-1;
	int n=(int)log2((num)/5+1);
	int t=(int) (num+5)/pow(2,n)-5;
	if(t==0){printf("Sheldon");}
	else if(t==1){printf("Leonard");}
	else if(t==2){printf("Penny");}
	else if(t==3){printf("Rajesh");}
	else {printf("Howard");}
	return 0;
}