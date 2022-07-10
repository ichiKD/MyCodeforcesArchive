#include<stdio.h>
#include<string.h>
int main(){
	char string[1000];
	scanf("%s",&string);
	if(string[0]>96){
		printf("%c",string[0]-32);
	}
	else{
		printf("%c",string[0]);
	}
	printf("%s",string+1);
	return 0;
}