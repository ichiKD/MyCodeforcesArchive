#include<stdio.h>
int main(){
	int testcases;
	int n,x;
	int ans;
	int min,max;
	int a[200500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&x);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		ans=0;
		min=max=a[0];
		for(int i=0;i<n;i++){
			if(min>a[i]){
				min=a[i];
			}
			if(max<a[i]){
				max=a[i];
			}
			if(max-min>2*x){
				ans++;
				min=max=a[i];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}