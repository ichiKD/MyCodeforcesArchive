#include <stdio.h>
#include <math.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n,check;
	char num[100000];
	char ans[100000];
	while(testcases--){
		check=1;
		scanf("%d",&n);
		scanf("%s",num);
		if(num[0]<'9'){
			for(int i=0;i<n;i++){
				printf("%c",'0'+'9'-num[i]);
			}
		}
		else{
				for(int i=0;i<n;i++){
					ans[i]='1';
				}
				ans[n]='1';
				for(int i=0;i<n;i++){
					if(ans[n-i]>=num[n-i-1]){
						ans[n-i]=ans[n-i]-num[n-i-1]+'0';
					}
					else{
						ans[n-i]=ans[n-i]-num[n-i-1]+'0'+10;
						ans[n-i-1]-=1;
					}
				}
				for(int i=0;i<n;i++){
					printf("%c",ans[i+1]);
				}
		}
	printf("\n");
	}
	return 0;
}