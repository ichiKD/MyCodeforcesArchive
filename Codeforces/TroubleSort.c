#include<stdio.h>
int main(){
	int testcases;
	int n, check1, check2;
	int a[600], b[600];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
		}
		check1=0;
		for(int i=1;i<n;i++){
			if(b[i]!=b[0]){
				check1=1;
				break;
			}
		}
		check2=1;
		for(int i=1;i<n;i++){
			if(a[i]<a[i-1]){
				check2=0;
				break;
			}
		}
		if(check1||check2){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}