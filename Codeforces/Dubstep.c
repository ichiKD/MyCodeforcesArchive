#include<stdio.h>
#include<string.h>
int main(){
	char string[200];
	scanf("%s",string);
	int L1=strlen(string);
	int space;
	int n1;
	for(int i=0; i<L1;){
		if(string[i]=='W'&&string[i+1]=='U'&&string[i+2]=='B'){
			i=i+3;
		}
		else{
			printf("%c",string[i]);
			n1=i+1;
			break;
		}
	}
	for(int i=n1; i<L1;){
		if(string[i]=='W'&&string[i+1]=='U'&&string[i+2]=='B'){
			i=i+3;
			space=1;
			continue;
		}
		else{
			if(space==1){
				printf(" %c",string[i]);
				i=i+1;
				space=0;
			}
			else{
				printf("%c",string[i]);
				i=i+1;
			}
		}
	}
	return 0;
}