#include<stdio.h>
int main(){
	int testcases;
	int n,m;
	int check1,check2;
	char a[60],b[60];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&m);
		scanf("%s",a);
		scanf("%s",b);
		check1=1;
		check2=0;
		for(int i=1;i<m;i++){
			if(b[m-i]!=a[n-i]){
				check1=0;
			}
		}
		for(int i=0;i<n-m+1;i++){
			if(b[0]==a[i]){
				check2=1;
				break;
			}
		}
		if(check1&&check2){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}