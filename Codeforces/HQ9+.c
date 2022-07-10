#include<stdio.h>
#include<string.h>
int main(){
	char stringp[101];
	scanf("%s", stringp);
	int L=strlen(stringp);
	int output=0;
	for(int i=0; i<L; i++){
		if(stringp[i]=='H'||stringp[i]=='Q'||stringp[i]=='9'){
			output=1;
			break;
		}
	}
	if(output==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}