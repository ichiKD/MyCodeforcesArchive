#include<stdio.h>
#include<string.h>
char lowAB(char a){
	if (a<=90){
		return a+32;
	}
	else {return a;}
}
int main(){
	char string1[100], string2[100];
	scanf("%s%s",string1,string2);
	int L1=strlen(string1);
	int count=-1;
	for(int i=0;i<L1;i++){
		if(string1[i]==string2[i]||string2[i]>90&&string1[i]==string2[i]-32||string1[i]>90&&string1[i]-32==string2[i]){}
		else{
			count=i;
			break;
		}
	}
	if(count==-1){printf("0");}
	else if(lowAB(string1[count])>lowAB(string2[count])){printf("1");}
	else {printf("-1");}
	return 0;
}