#include<stdio.h>
#include<string.h>
int main(){
	int testcases;
	int n;
	char a[2005];
	int count[2005][3];
	int L;
	int diff;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		scanf("%s",a);
		L=strlen(a);
		count[0][0]=count[0][1]=count[0][2]=0;
		for(int i=1;i<L-1;i++){
			if(a[i]=='('){
				count[i][0]=1+count[i-1][0];
				count[i][1]=count[i-1][1];
				count[i][2]=count[i-1][2];
			}
			else if(a[i]==')'){
				count[i][1]=1+count[i-1][1];
				count[i][0]=count[i-1][0];
				count[i][2]=count[i-1][2];
			}
			else{
				count[i][2]=1+count[i-1][2];
				count[i][0]=count[i-1][0];
				count[i][1]=count[i-1][1];
			}
		}
		diff=count[L-2][1]-count[L-2][0];
		if(count[L-2][2]<2+diff){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		for(int i=0;i<L;i++){
			a[i]=' ';
		}
	}
	return 0;
}