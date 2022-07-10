#include<stdio.h>
#include<string.h>
int main(){
	int count=0,x=100500;
	char string[100500];
	scanf("%s",string);
	int L1=strlen(string);
	for(int i=0;i<L1;i++){
		if(string[i]=='A'){
			if(string[i+1]=='B'){
				x=i+2;
				break;
			}
		}
	}
	for(int i=x;i<L1;i++){
		if(string[i]=='B'){
			if(string[i+1]=='A'){
				count=1;
				break;
			}
		}
	}
	x=100500;
	for(int i=0;i<L1;i++){
		if(string[i]=='B'){
			if(string[i+1]=='A'){
				x=i+2;
				break;
			}
		}
	}
	for(int i=x;i<L1;i++){
		if(string[i]=='A'){
			if(string[i+1]=='B'){
				count=1;
				break;
			}
		}
	}
	if(count){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}