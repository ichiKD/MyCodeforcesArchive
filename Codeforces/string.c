
#include<stdio.h>

int main(){
	
	int num;
	scanf("%d",&num);
	char string[num][100];
	for(int i=0;i<num;i++){
		printf("enter string: ");
		scanf("%s",&string[i]);
		printf("%s\n",string[i]);
	}
	
	
	return 0;
}