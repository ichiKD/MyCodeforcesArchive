#include <stdio.h>

int max(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

int main(){
	int n, ans;
	int a[5500], pdf[5500];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	pdf[0]=a[0];
	for(int i=1;i<n;i++){
		pdf[i]=pdf[i-1]+a[i];
	}
	ans=0;
	for(int i=0;i<n;i++){
		for(int j=n-1;i<=j;j--){
			if(i==0){
				if(pdf[j]>100*(j+1)){
					ans=max(ans, j+1-i);
					break;
				}
			}
			else if(pdf[j]-pdf[i-1]>100*(j+1-i)){
				ans=max(ans, j+1-i);
				break;
			}
		}
	}
	printf("%d", ans);
	return 0;
}