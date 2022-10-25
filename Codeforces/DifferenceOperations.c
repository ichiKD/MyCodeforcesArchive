#include<stdio.h>
int main(){
	int testcases;
	int n,check;
	int a[200];
	scanf("%d",&testcases);
	while(testcases--){
		check=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=1;i<n;i++){
			if(a[i]%a[0]!=0){
				check=0;
				break;
			}
		}
		if(check==1) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}