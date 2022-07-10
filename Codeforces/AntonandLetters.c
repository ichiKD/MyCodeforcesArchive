#include<stdio.h>
#include<string.h>
int main(){
	char string[1001];
	scanf("%[^\n]s",string);
	int L1=strlen(string)-1;
	int count=0;
	for(char i=97;i<123;i++){
		for(int j=1; j<L1; j++){
			if(string[j]==i){
				count=count+1;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}