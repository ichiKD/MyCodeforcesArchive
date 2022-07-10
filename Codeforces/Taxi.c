#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int n4=0,n3=0,n2=0,n1=0;
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		if(arr[i]==4){++n4;}
		else if(arr[i]==3){++n3;}
		else if(arr[i]==2){++n2;}
		else{++n1;}
	}
	if(n2%2==0){
		if(n3>n1){
			printf("%d", n4+n3+n2/2);
		}
		else{
			printf("%d", n4+n3+n2/2+(n1+3-n3)/4);
		}
	}
	else{
		if(n3+2>n1){
			printf("%d", 1+n4+n3+n2/2);
		}
		else{
			printf("%d", 1+n4+n3+n2/2+(n1+1-n3)/4);
		}
	}
	return 0;
}