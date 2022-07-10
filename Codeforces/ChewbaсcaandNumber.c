#include<stdio.h>
#include<string.h>
int main(){
	char arr[25];
	scanf("%s",arr);
	int L1=strlen(arr);
	if(arr[0]=='9'||arr[0]<53){printf("%c",arr[0]);}
	else{printf("%c",105-arr[0]);}
	for(int i=1;i<L1;i++){
		if(arr[i]<53){
			printf("%c",arr[i]);
		}
		else{
			printf("%c",105-arr[i]);
		}
	}
	return 0;
}



/*
#include<stdio.h>
int main(){
	__int128 number,d;
	scanf("%llld",&number);
	d=number;
	int numOfDigits=0;
	for(int i=0;d;i++){
		d/=10;
		numOfDigits+=1;
	}
	printf("%d %llld\n ",numOfDigits,number);
	int num[24]={0};
	__int128 y=10;
	for(int i=0;i<numOfDigits;i++){
		num[i]=number%y*10/y;
		y=y*10;
	}
	for(int i=0;i<numOfDigits;i++){
		printf("%d",num[i]);
	}
	long long int a=0;
	long long int z=1;
	for(int i=0;i<numOfDigits;i++){
		if(num[i]<5){
			a=a+num[i]*z;
		}
		else{
			a=a+(9-num[i])*z;
		}
		z=z*10;
	}
	if(num[numOfDigits-1]==9){
		a=a+num[numOfDigits-1]*z/10;
	}
	//printf("%lld",a);
	return 0;
}
*/