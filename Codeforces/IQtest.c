#include<stdio.h>
int main(){
	int n;
	int odd;
	int a[124];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]%2==a[1]%2){
		odd=(a[0]+1)%2;
		for(int i=0;i<n;i++){
			if(odd==a[i]%2){
				printf("%d",i+1);
				break;
			}
		}
	}
	else{
		if(a[0]%2==a[2]%2){
			printf("2");
		}
		else{
			printf("1");
		}
	}
	return 0;
}