#include<stdio.h>

int main(){
	int testcases;
	int n, min;
	int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		min=a[1];
		for(int i=0;i<n;i++){
			if(min>a[i]){
				min=a[i];
			}
		}
		if(a[0]>min){
			printf("Alice\n");
		}
		else{
			printf("Bob\n");
		}
	}
	return 0;
}
