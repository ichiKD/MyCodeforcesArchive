#include<stdio.h>
int main(){
	int testcases=0;
	scanf("%d",&testcases);
	int list[testcases][3];
	for(int i=0;i<testcases;i++){
		scanf("%d%d%d",&list[i][0],&list[i][1],&list[i][2]);
	}
	for(int i=0;i<testcases;i++){
		if(list[i][0]==list[i][1]&&list[i][0]==list[i][2]){
			printf("YES\n");
			printf("%d %d %d\n", list[i][0], list[i][1], list[i][2]);
		}
		else if(list[i][0]==list[i][1]&&list[i][0]>list[i][2]){
			printf("YES\n");
			printf("%d %d %d\n", list[i][0], list[i][2], list[i][2]);
		}
		else if(list[i][0]==list[i][2]&&list[i][0]>list[i][1]){
			printf("YES\n");
			printf("%d %d %d\n", list[i][2], list[i][1], list[i][1]);
		}
		else if(list[i][1]==list[i][2]&&list[i][1]>list[i][0]){
			printf("YES\n");
			printf("%d %d %d\n", list[i][1], list[i][0], list[i][0]);
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}