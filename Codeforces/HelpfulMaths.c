#include<stdio.h>
#include<string.h>

int main(){
	int L;
	char st[200];
	int count[3]={0};
	scanf("%s", st);
	L=strlen(st);
	for(int i=0;i<L;i+=2){
		count[st[i]-'1']++;
	}
	if(count[0]!=0){
		printf("1");
		count[0]--;
	}
	else if(count[1]!=0){
		printf("2");
		count[1]--;
	}
	else{
		printf("3");
		count[2]--;
	}
	for(int i=0;i<count[0];i++){
		printf("+1");
	}
	for(int i=0;i<count[1];i++){
		printf("+2");
	}
	for(int i=0;i<count[2];i++){
		printf("+3");
	}
	return 0;
}