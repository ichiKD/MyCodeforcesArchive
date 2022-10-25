#include<stdio.h>
#define N 100500
int main(){
	int testcases;
	int n;
	int a[N];
	int ans[N],map[N];
	scanf("%d",&testcases);
		while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			a[i]--;
		}
		for(int i=0;i<n;i++){
			ans[i]=0;
			map[i]=0;
		}
		if(n==1){
			printf("1\n");
		}
		else{
			ans[a[0]]++;
			map[a[0]]=0;
			ans[a[1]]++;
			map[a[1]]=1;
			for(int i=2;i<n;i++){
				if(a[i]==a[i-1]){
					ans[a[i]]++;
					map[a[i]]=i%2;
				}
				else if(ans[a[i]]==0){
					ans[a[i]]=1;
					map[a[i]]=i%2;
				}
				else{
					if(i%2!=map[a[i]]%2){
						ans[a[i]]++;
						map[a[i]]=i%2;
					}
				}
			}
			for(int i=0;i<n;i++){
				printf("%d ",ans[i]);
			}
			printf("\n");
		}
	}
	return 0;
}