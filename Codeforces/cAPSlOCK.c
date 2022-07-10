#include<stdio.h>
#include<string.h>
int main(){
	char st[101];
	scanf("%s",st);
	int L1=strlen(st);
	int check=1;
	for(int i=1;i<L1;i++){
		if(st[i]>90){
			check=0;
			break;
		}
	}
	if(check==1){
		if(st[0]>90){printf("%c",st[0]-32);}
		else{printf("%c",st[0]+32);}
		for(int i=1;i<L1;i++){
			printf("%c",st[i]+32);
		}
	}
	else{
		printf("%s",st);
	}
	return 0;
}