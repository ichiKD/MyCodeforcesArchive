#include<stdio.h>
#include<string.h>
int main(){
	char A[100];
	scanf("%s",&A[0]);
	int L=strlen(A);
//	printf("%d",L);
	char B[26];
	int num1,num2;
	num1=0;
	for(int i=0;i<26;i++){
		B[i]=97+i;
		num2=0;
		for(int j=0;j<L;j++) {
			if (B[i]==A[j]){
				num2=num2+1;
			}
		}
		if(num2>0){
			num1+=1;
		}
	}
//	printf("%d",num1);
	if(num1%2==0){
		printf("CHAT WITH HER!");
	}
	else{
		printf("IGNORE HIM!");
	}
	return 0;
}