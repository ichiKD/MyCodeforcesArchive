#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	scanf("%s",string);
	int L1=strlen(string);
	int count=0;
	for(int i=0;i<L1;i++){
		if(string[i]>96){
			count=count+1;
		}
	}
	if(count*2>=L1){
		for(int i=0;i<L1;i++){
			if(string[i]>96){
				printf("%c",string[i]);
			}
			else{
				printf("%c",string[i]+32);
			}
		}
	}
	else{
		for(int i=0;i<L1;i++){
			if(string[i]>96){
				printf("%c",string[i]-32);
			}
			else{
				printf("%c",string[i]);
			}
		}
	}
	return 0;
}