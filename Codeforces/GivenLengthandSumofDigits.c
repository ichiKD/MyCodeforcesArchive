#include<stdio.h>
int main(){
	int m, s;
	int sum;
	int big[120],small[120];
	scanf("%d%d",&m,&s);
	if(s==0){
		if(m==1){
			printf("0 0\n");
		}
		else{
			printf("-1 -1\n");
		}
	}
	else if(m*9<s){
		printf("-1 -1\n");
	}
	else{
		sum=0;
		for(int i=0;i<m;i++){
			if(sum+9<=s){
				big[i]='9';
				sum+=9;
			}
			else{
				big[i]='0' + s-sum;
				for(int j=i+1;j<m;j++){
					big[j]='0';
				}
				break;
			}
		}
		sum=0;
		for(int i=0;i<m;i++){
			if((m-1-i)*9+sum>=s){
				if(i==0){
					small[i]='1';
					sum+=1;
				}
				else{
					small[i]='0';
				}
			}
			else{
				small[i]='0'+s-sum-(m-1-i)*9;
				for(int j=i+1;j<m;j++){
					small[j]='9';
				}
				break;
			}
		}
		for(int i=0;i<m;i++){
			printf("%c",small[i]);
		}
		printf(" ");
		for(int i=0;i<m;i++){
			printf("%c",big[i]);
		}
	}
	return 0;
}