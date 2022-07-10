#include<stdio.h>
#include <string.h>
int main(){
	char hello[100];
	scanf("%s",hello);
	int L1=strlen(hello), count=0 , n=0;
	for(int i=0;i<L1;i++){
		if(hello[i]=='h'){
			count=1;
			n=i+1;
			break;
		}
	}
	if(count==1){
		for(int i=n;i<L1;i++){
			if(hello[i]=='e'){
				count=2;
				n=i+1;
				break;
			}
		}
	}
	if(count==2){
		for(int i=n;i<L1;i++){
			if(hello[i]=='l'){
				count=3;
				n=i+1;
				break;
			}
		}
	}
	if(count==3){
		for(int i=n;i<L1;i++){
			if(hello[i]=='l'){
				count=4;
				n=i+1;
				break;
			}
		}
	}
	if(count==4){
		for(int i=n;i<L1;i++){
			if(hello[i]=='o'){
				count=5;
				break;
			}
		}
	}
	if(count==5){printf("YES");}
	else{printf("NO");}
	return 0;
}