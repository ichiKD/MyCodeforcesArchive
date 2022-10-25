#include<stdio.h>
int main(){
	int testcases;
	int n, k, d, ans;
	int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++){
			scanf("%1d",&a[i]);
		}
		d=1000000;
		ans=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				if(d>k){
					d=1;
				}
				else{
					ans--;
					d=1;
				}
			}
			else if(d>k){
				ans++;
				d=1;
			}
			else{
				d++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}