#include<stdio.h>
int main(){
	int testcases;
	int n;
	int a[200500],b[200500];
	int check;
	scanf("%d",&testcases);
	while(testcases--){
		check=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]>b[i]){
				check=0;
			}
		}
		if(a[n-1]!=b[n-1]&&b[n-1]>b[0]+1){
			check=0;
		}
		for(int i=0;i<n-1;i++){
			if(a[i]!=b[i]&&b[i]>b[i+1]+1){
				check=0;
			}
		}
		if(check){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}