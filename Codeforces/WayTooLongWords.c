#include<stdio.h>
#include<string.h>
int main(){
	int num;
	scanf("%d",&num);
	char string[num][101];
	for(int i=0;i<num;i++){
		//printf("enter string: ");
		scanf("%s",&string[i]);
		//printf("%s\n",string[i]);
	}
	for(int j=0;j<num;j++){
		int L=strlen(string[j]);
		if (L>10){
			printf("%c%d%c\n",string[j][0],L-2,string[j][L-1]);
		}
		else{
			printf("%s\n",string[j]);
		}
	}
	return 0;
}