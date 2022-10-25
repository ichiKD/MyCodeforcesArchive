#include<stdio.h>
int num[200500];
void swap(int index1, int index2){
	int temp=num[index1];
	num[index1]=num[index2];
	num[index2]=temp;
}
int main(){
	int L=0, check=0,done=0;
	int min_index;
	while(scanf("%1d",&num[L])!=EOF){
		L++;
	}
	for(int i=0;i<L;i++){
		if(num[i]%2==0){
			check=1;
			min_index=i;
			break;
		}
	}
	for(int i=min_index;i<L;i++){
		if(num[i]%2==0){
			if(num[i]<num[L-1]){
				min_index=i;
				done=1;
				break;
			}
			else{
				min_index=i;
			}
		}
		if(done){
			break;
		}
	}
	swap(min_index, L-1);
	if(check){
		for(int i=0;i<L;i++){
			printf("%d",num[i]);
		}
	}
	else{
		printf("-1");
	}
	return 0;
}