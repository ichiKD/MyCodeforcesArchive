#include <stdio.h>
#include <string.h>

int min(int a, int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}

// two types of strings are acceptable
// 0001111
// 1100000

int main(){
	int testcases, L;
	int zero, one;
	int index;
	int ans1, ans2;
	char a[1500];	
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%s",a);
		L=strlen(a);
		index=-1;
		zero=one=0;
		for(int i=0;i<L;i++){
			if(a[i]=='0'){
				zero++;
			}
			else{
				one++;
			}
			if(zero>one){
				zero=0;
				one=0;
				index=i;
			}
		}
		ans1=0;
		for(int i=index+1;i<L;i++){
			if(a[i]=='0'){
				ans1++;
			}
		}
		for(int i=0;i<=index;i++){
			if(a[i]=='1'){
				ans1++;
			}
		}
		index=L;
		zero=one=0;
		for(int i=L-1;0<=i;i--){
			if(a[i]=='0'){
				zero++;
			}
			else{
				one++;
			}
			if(zero>one){
				zero=0;
				one=0;
				index=i;
			}
		}
		// printf("%d \n", index);
		ans2=0;
		for(int i=index;i<L;i++){
			if(a[i]=='1'){
				ans2++;
			}
		}
		for(int i=0;i<index;i++){
			if(a[i]=='0'){
				ans2++;
			}
		}
		if(L==1|| L==2){
			printf("0\n");
		}
		else{
			printf("%d\n", min(ans1, ans2));
		}
		memset(a, 0, L*sizeof(char));
	}
	return 0;
}