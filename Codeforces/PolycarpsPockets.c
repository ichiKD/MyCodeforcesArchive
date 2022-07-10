#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int array[N];
	for(int i=0; i<N; i++){
		scanf("%d", &array[i]);
	}
	int count=0;
	int temp=0;
	for(int i=1; i<=100; i++){
		temp=0;
		for(int j=0; j<N; j++){
			if(i==array[j]){
				temp=temp+1;
			}
		}
		if(temp>count){
			count=temp;
		}	
	}
	printf("%d",count);
	return 0;
}