#include <stdio.h>
int main(){
	int n, check=0;
	int a[5050];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		a[i]--;
	}
	for(int i=0;i<n;i++){
		if(a[a[a[i]]]==i){
			check=1;
			break;
		}
	}
	if(check){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}