#include<stdio.h>
int main(){
	int n,testcases;
	scanf("%d",&testcases);
	char arr[50500],brr[50500],crr[50500];
	for(int j=0;j<testcases;j++){
	scanf("%d",&n);
	scanf("%s",&arr);
	brr[0]='1';
	crr[0]='1';
	int t=n;
	for(int i=1;i<n;i++){
		if(arr[i]=='1'){
			brr[i]='1';
			crr[i]='0';
			t=i+1;
			break;
		}
		else if(arr[i]=='0'){
			brr[i]='0';
			crr[i]='0';
		}
		else{
			brr[i]='1';
			crr[i]='1';
		}
	}
	for(int i=t;i<n;i++){
		if(arr[i]=='0'){
			brr[i]='0';
			crr[i]='0';
		}
		else if(arr[i]=='2'){
			brr[i]='0';
			crr[i]='2';
		}
		else{
			brr[i]='0';
			crr[i]='1';
		}
	}
	for(int i=0;i<n;i++){
		printf("%c",brr[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%c",crr[i]);
	}
	printf("\n");
	}
	return 0;
}