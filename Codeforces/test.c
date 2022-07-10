#include<stdio.h>

int main(){
	
	//count number of char in a string
	
	char string[40];
	
	printf("enter string: ");
	scanf("%s",string);
	printf("%s\n",string);
	
	int num;
	for(num=0;string[num]!=0;num++){}	
	printf("%d",num);
	
	return 0;
}