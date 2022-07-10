#include<stdio.h>
#include<string.h>
 
int checkX(char string1[],char string3[], char x, int L1, int L2){
	int count1=0, count2=0;
	for(int i=0; i<L1;i++){
		if (string1[i]==x){count1=count1+1;}
	}
	for(int i=0; i<L2;i++){
		if (string3[i]==x){count2=count2+1;}
	}
	if(count1==count2){
		return 1;
	}
	else{
		return 0;
	}
}
	
int main(){
	
	char string1[200],string2[100],string3[100];
	scanf("%s%s%s",string1,string2,string3);
	strcat(string1,string2);
	int L1=(int)strlen(string1);
	int L2=(int)strlen(string3);
	int alphabetMatch=0;
	for(int j=65;j<=90;j++){
		alphabetMatch=alphabetMatch + checkX(string1, string3, j, L1, L2);
	}
	alphabetMatch==26?printf("YES"):printf("NO");
	return 0;
}