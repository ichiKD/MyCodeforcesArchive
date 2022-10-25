#include<stdio.h>
#include<string.h>
int main(){
	int testcases,n,check;
	char str[30];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%s",str);
		n=strlen(str);
		str[0]=str[0]-1;
		check=0;
		for(int i=0;i<n;i++){
			if(check==1||str[i]!='0'){
				printf("%c",str[i]);
				check=1;
			}
			str[i]=' ';
		}
		if(check==0)	printf("0");
		printf("\n");
	}
	return 0;
}