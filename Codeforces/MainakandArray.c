#include<stdio.h>
int maximum(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	int testcases;
	int n;
	int a[2000];
	int min,max;
	int ans;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		min=a[0];
		max=a[0];
		for(int i=0;i<n-1;i++){
			if(min>a[i]){
				min=a[i];
			}
		}
		for(int i=1;i<n;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		ans=a[n-1]-a[0];
		if(n==1){
			printf("0\n");
		}
		else{
			ans=maximum(ans, a[n-1]-min);
			ans=maximum(ans, max-a[0]);
			for(int i=1;i<n;i++){
				if(ans<a[i-1]-a[i]){
					ans=a[i-1]-a[i];
				}
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}