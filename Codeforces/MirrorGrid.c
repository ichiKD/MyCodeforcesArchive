#include<stdio.h>
#include<string.h>
int main(){
	int testcases;
	int n;
	int a[120][120];
	int count;
	int sum;
	int t,w;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%1d",&a[i][j]);
			}
		}
		w=n;
		t=0;
		while(w>0){
			for(int i=0;i<w-1;i++){
				sum=a[t][t+i]+a[t+i][t+w-1]+a[t+w-1-i][t]+a[t+w-1][t+w-1-i];
				if(sum==0||sum==4){
					count=count;
				}
				else if(sum==1||sum==3){
					count+=1;
				}
				else{
					count+=2;
				}		
			}
			t++;
			w=w-2;
		}
		printf("%d\n",count);
	}
	return 0;
}