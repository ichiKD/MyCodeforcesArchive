#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		if(i%4==0||i%4==2){
			for(int j=0;j<m;j++){
				printf("#");
			}
			printf("\n");
		}
		else if(i%4==1){
			for(int j=1;j<m;j++){
				printf(".");
			}
			printf("#\n");
		}
		else {
			printf("#");
			for(int j=1;j<m;j++){
				printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}