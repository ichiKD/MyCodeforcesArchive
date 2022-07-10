#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int money[n];
	for(int i=0;i<n;i++){
		scanf("%d",&money[i]);
	}
	int lenmax=1;
	int len=1;
	for(int i=1;i<n;i++){
		if(money[i]>=money[i-1]){
			len+=1;
		}
		else{
			len=1;
		}
		if(len>lenmax){
			lenmax=len;
		}
	}
	printf("%d",lenmax);
	return 0;
}