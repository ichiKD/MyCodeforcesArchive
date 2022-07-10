#include<stdio.h>
int main(){
	int N;
	int chest=0, biceps=0, back=0;
	int temp;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&temp);
		if(i%3==0){chest=chest+temp;}
		else if(i%3==1){biceps=biceps+temp;}
		else {back=back+temp;}
	}
	chest>biceps?chest>back?printf("chest"):printf("back"):biceps>back?printf("biceps"):printf("back");
	return 0;
}
