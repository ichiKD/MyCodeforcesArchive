#include<stdio.h>

int max(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	int testcases;
	int n, check, min;
	int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		check=1;
		min=a[0];
		for(int i=0;i<n;i++){
			if(min>a[i]){
				min=a[i];
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