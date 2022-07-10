#include<stdio.h>
int main(){
	int n,k,ans;
	scanf("%d%d",&n,&k);
	int a[100500];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	if(k==1){
		ans=a[0];
		for(int i=0;i<n;i++){
			if(ans>a[i]){
				ans=a[i];
			}
		}
		printf("%d",ans);
	}
	else if(k==2){
		ans=a[0];
		if(ans<a[n-1]) ans=a[n-1];
		printf("%d",ans);
	}
	else{
		ans=a[0];
		for(int i=0;i<n;i++){
			if(ans<a[i]){
				ans=a[i];
			}
		}
		printf("%d",ans);
	}
	return 0;
}