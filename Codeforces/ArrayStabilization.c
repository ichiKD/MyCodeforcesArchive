#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int N[a];
	int min1, min2, max1, max2;
	for(int i=0; i<a;i++){
		scanf("%d",&N[i]);
	}
	min1=min2=200000;
	max1=max2=0;
	for(int i=0; i<a;i++){
		if(min1>N[i]){
			min2=min1;
			min1=N[i];
		}
		else if(min2>N[i]){
			min2=N[i];
		}
	}
	for(int i=0; i<a;i++){
		if(max1<N[i]){
			max2=max1;
			max1=N[i];
		}
		else if(max2<N[i]){
			max2=N[i];
		}
	}
	if(max1-min2<max2-min1){printf("%d",max1-min2);}
	else{printf("%d",max2-min1);}
	return 0;
}