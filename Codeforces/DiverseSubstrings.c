#include<stdio.h>
int main(){
	int testcases;
	int n, max, unique;
	int a[100500];
	int count[10];
	long long int ans;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%1d", &a[i]);
		}
		ans=0;
		for(int i=0;i<n;i++){
			unique=0;
			max=0;
			for(int k=0;k<10;k++){
				count[k]=0;
			}
			for(int j=i;0<=j;j--){
				if(count[a[j]]==0){
					unique++;
				}
				count[a[j]]++;
				if(count[a[j]]>max){
					max=count[a[j]];
				}
				if(max<=unique){
					ans++;
				}
				if(max>10){
					break;
				}
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
