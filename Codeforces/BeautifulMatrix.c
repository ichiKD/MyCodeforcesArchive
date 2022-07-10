#include<stdio.h>
int main(){
	int matrix[5][5]={0};
	int x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j]==1){
				x=i;
				y=j;
			}
		}
	}
	int a,b;
	if(x-2>=0){a=x-2;}
	else{a=2-x;}
	if(y-2>=0){b=y-2;}
	else{b=2-y;}
	printf("%d",a+b);
	return 0;
}